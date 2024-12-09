from django.shortcuts import render
from django.views.generic import FormView
from django.contrib.auth import login

class UserRegistrationView(FormView):
    template_name=''
    form_class=''
    success_url=''


    def form_valid(self, form):
        user=form.save()
        login(self.request,user)
        return super().form_valid(form)
