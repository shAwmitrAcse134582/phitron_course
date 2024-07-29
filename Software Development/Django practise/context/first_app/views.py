from django.shortcuts import render

def home(request):
    d={'author':'shawmitra',
       'age':24,
       'lst':[1,2,3],
       'courses':[
           
           {
               'id':1,
               'name':'python',
               'fee':1000
           },
           {
               'id':2,
               'name':'DSA',
               'fee':2000

           },
           {
               'id':3,
               'name':'Database',
               'fee':3000
           }
       ]
       }
    return render(request,'home.html',context=d)
