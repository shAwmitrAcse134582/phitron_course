from typing import Any
from django.shortcuts import render,redirect
from . import forms
from django.contrib.auth.forms import AuthenticationForm,PasswordChangeForm
from django.contrib.auth import authenticate, login, update_session_auth_hash,logout
from django.contrib import messages
from django.contrib.auth.decorators import login_required
from posts.models import Post
from django.contrib.auth.views import LoginView,LogoutView
from django.urls import reverse_lazy




# Create your views here.
# def add_author(request):
#     if request.method =='POST':
#         author_form=forms.AuthorForm(request.POST)
#         if author_form.is_valid():
#             author_form.save()
#             return redirect('add_author')
#     else:
#         author_form=forms.AuthorForm()
#     return render(request,'add_author.html',{'form' : author_form})

def register(request):
    if request.method =='POST':
        register_form=forms.RegestrationForm(request.POST)
        if register_form.is_valid():
            register_form.save()
            messages.success(request,'Account created succesfully')
            return redirect('register')
    else:
        register_form=forms.RegestrationForm()
    return render(request,'register.html',{'form' :register_form,'type':'Register'})



def user_login(request):
    if request.method == 'POST':
        form = AuthenticationForm(request, request.POST)
        if form.is_valid():
            user_name = form.cleaned_data['username']
            user_pass = form.cleaned_data['password']
            user = authenticate(username=user_name, password=user_pass)
            if user is not None:
                messages.success(request, 'Logged in successfully')
                login(request, user)
                return redirect('profile')  # Redirect to profile page after login
            else:
                messages.warning(request, 'Login information is incorrect')
                return redirect('register')  # Assuming 'register' is the name of your registration URL
        else:
            # If the form is not valid, re-render the login form with errors
            messages.error(request, 'Invalid form data')
            return render(request, 'register.html', {'form': form, 'type': 'Login'})
    else:
        # If the request is GET, render the login form
        form = AuthenticationForm()
        return render(request, 'register.html', {'form': form, 'type': 'Login'})

# using class based views

class UserLogInview(LoginView):
    template_name='register.html'
    # success_url=reverse_lazy('profile')
    def get_success_url(self):
        return reverse_lazy('profile')

    def form_valid(self,form):
        messages.success(self.request,'Logged in seccessful')
        return super().form_valid(form)
    
    def form_invalid(self,form):
        messages.success(self.request,'Logged in information incorrect')
        return super().form_valid(form)
    
    def get_context_data(self, **kwargs):
        context = super().get_context_data(**kwargs)
        context['type'] ='Login'
        return context


@login_required
def profile(request):
    data=Post.objects.filter(author=request.user)
    
    # if request.method == 'POST':
    #     profile_form = forms.ChangeUserForm(request.POST, instance=request.user)
    #     if profile_form.is_valid():
    #         profile_form.save()
    #         messages.success(request, 'Profile updated successfully')
    #         return redirect('profile')
    # else:
    #     profile_form = forms.ChangeUserForm(instance=request.user)
    
    return render(request, 'profile.html',{'data' : data})


@login_required
def  edit_profile(request):
    if request.method == 'POST':
        profile_form = forms.ChangeUserForm(request.POST, instance=request.user)
        if profile_form.is_valid():
            profile_form.save()
            messages.success(request, 'Profile updated successfully')
            return redirect('profile')
    else:
        profile_form = forms.ChangeUserForm(instance=request.user)
    
    return render(request, 'update_profile.html', {'form': profile_form})


def pass_change(request):
    if request.method =='POST':
        form=PasswordChangeForm(request.user,data=request.POST)
        if form.is_valid():
            form.save()
            messages.success(request,'password updated succesfully')
            update_session_auth_hash(request,form.user)
            return redirect('profile')
    else:
        form=PasswordChangeForm(user=request.user)
    return render(request,'pass_change.html',{'form' :form})

def user_logout(request):
    logout(request)
    return redirect('user_login')

# class UserLogoutViews(LogoutView):
#     template_name = 'profile.html'  
#     next_page = reverse_lazy('profile') 
    




        


    