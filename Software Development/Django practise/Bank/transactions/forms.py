from django import forms
from .models import Transactions
class TransactionForm(forms.ModelForm):
    class Meta:
        model = Transactions
        fields = [
            'amount',
            'transaction_type'
        ]

    def __init__(self, *args, **kwargs):
        self.account = kwargs.pop('account') # account value ke pop kore anlam
        super().__init__(*args, **kwargs)
        self.fields['transaction_type'].disabled = True # ei field disable thakbe
        self.fields['transaction_type'].widget = forms.HiddenInput() # user er theke hide kora thakbe

    def save(self, commit=True):
        self.instance.account = self.account
        self.instance.balance_after_transaction = self.account.balance
        return super().save()
    

class DepositForm(TransactionForm):
    def clean_amount(self):
        min_deposit_amount=100
        amount=self.cleaned_data.get('amount')
        if amount<min_deposit_amount:
            raise forms.ValidationError(
                f'You need to deposit at least {min_deposit_amount} tk'
            )
        return amount
    

class WithdrawForm(TransactionForm):
    def clean_amount(self):
        account=self.account
        min_withdraw_amount=500
        max_withdraw_amount=20000
        balance=account.balance
        amount=self.cleaned_data.get('amount')
        if amount < min_withdraw_amount:
            raise forms.ValidationError(
                f'You can withdraw at least {min_withdraw_amount} tk'
            )
        
        if amount>max_withdraw_amount:
            raise forms.ValidationError(
                f'You can withdraw at most {max_withdraw_amount} tk'

            )
        
        if amount > balance:
            raise forms.ValidationError(
                f'You have {balance} tk im your account'
                'You can not withdraw more than your account balance'
            )
        
        return amount
    
class LoanRequestform(TransactionForm):
    def clean_amount(self):
        amount=self.cleaned_data.get('amount')
        return amount