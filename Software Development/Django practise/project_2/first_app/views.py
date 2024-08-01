from django.shortcuts import render
from django.http import HttpResponse

# Create your views here.

def home(reqest):
    # return HttpResponse("This is Home page")
    return render('request','first_app/home.html')
   
