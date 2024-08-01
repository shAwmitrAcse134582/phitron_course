from django.shortcuts import render

# Create your views here.

def home(request):
    d={'name':'Shawmitra','age':14,'courses':[
        {
            'name':'python',
            'fees':1000
        },
        {
            'name':'database',
            'fees':1000
        },
        {
            'name':'OOP',
            'fees':1000
        },
    ]}
    return render(request,'home.html',context=d)
