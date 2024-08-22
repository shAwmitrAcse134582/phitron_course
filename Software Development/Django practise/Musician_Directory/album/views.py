from django.shortcuts import render,redirect
from . import forms

# Create your views here.
def add_album(request):
    album_form=forms.albumForm()
    return render(request,'add_album.html',{'form':album_form})
