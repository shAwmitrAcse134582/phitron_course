from django.shortcuts import render
from django.http import HttpResponse

# Create your views here.
def courses(request):
    return HttpResponse('My course page')
def about(request):
    return HttpResponse("This is about page")
