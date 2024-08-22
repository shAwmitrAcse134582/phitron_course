from django.shortcuts import render
from . import forms
# Create your views here.
def add_musician(request):
    musician_form=forms.musicianForm()
    return render(request,'add_musician.html',{'form':musician_form})



