from django.shortcuts import render
from django.http import HttpResponse

def home(request):
    # Use render to return an HTML template
    return render(request, 'first_app/home.html')
