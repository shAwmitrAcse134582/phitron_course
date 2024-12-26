from django.shortcuts import render
from django.contrib.auth.mixins import LoginRequiredMixin
from django.views.generic import CreateView,ListView
from django.urls import reverse_lazy
from transactions.models import Transactions
from django.contrib import messages
from transactions.constants import DEPOSIT,WITHDRAWAL,LOAN,LOAN_PAID
from django.http import HttpResponse

from transactions.forms import(
    DepositForm,
    WithdrawForm,
    LoanRequestform
)
from transactions.models import Transactions

# Create your views here.

class TransactionCreateMixin(LoginRequiredMixin,CreateView):
    template_name='transactions/transaction_form.html'
    model=Transactions
    title=''
    success_url=reverse_lazy('transaction_report')

    def get_form_kwargs(self):
        kwargs=super().get_form_kwargs()
        kwargs.update({
            'account' : self.request.user.account
        })
        
        return kwargs
    
    def get_context_data(self, **kwargs):
        context= super().get_context_data(**kwargs)
        context.update({
            'title':self.title
        })
    
        return context

class DepositMoneyView(TransactionCreateMixin):
    form_class=DepositForm
    title='Deposit Form'

    def get_initial(self):
        initial={'transaction_type' : DEPOSIT}
        return initial
    
    def form_valid(self,form):
        amount=form.cleaned_data.get('amount')
        account=self.request.user.account
        account.balance +=amount

        account.save(
            update_fields=[
                'balance'
            ]
        )
        messages.success(self.request,f'{amount}$ was deposited to your account successfully')
        return super().form_valid(form)

class WithdrawMoneyView(TransactionCreateMixin):
    form_class = WithdrawForm
    title = 'Withdraw Money'

    def get_initial(self):
        initial = {'transaction_type': WITHDRAWAL}
        return initial

    def form_valid(self, form):
        amount = form.cleaned_data.get('amount')

        self.request.user.account.balance -= form.cleaned_data.get('amount')
        # balance = 300
        # amount = 5000
        self.request.user.account.save(update_fields=['balance'])

        messages.success(
            self.request,
            f'Successfully withdrawn {"{:,.2f}".format(float(amount))}$ from your account'
        )

        return super().form_valid(form)


class LoanRequestView(TransactionCreateMixin):
    form_class = LoanRequestform
    title = 'Request For Loan'

    def get_initial(self):
        initial = {'transaction_type': LOAN}
        return initial

    def form_valid(self, form):
        amount = form.cleaned_data.get('amount')
        current_loan_count = Transactions.objects.filter(
            account=self.request.user.account,transaction_type=3,loan_approve=True).count()
        if current_loan_count >= 3:
            return HttpResponse("You have cross the loan limits")
        messages.success(
            self.request,
            f'Loan request for {"{:,.2f}".format(float(amount))}$ submitted successfully'
        )

        return super().form_valid(form)
