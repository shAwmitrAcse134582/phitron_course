from django.shortcuts import render

# Create your views here.
def about(request):
    return render(request,'navigations/about.html')
def contact(request):
    return render(request,'navigations/contact.html')