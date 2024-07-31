from django.http import HttpResponse
from django.shortcuts import render


def home(request):
    return HttpResponse("Hello! This is the home page")


def index(request):
    return render(request, 'index.html')
