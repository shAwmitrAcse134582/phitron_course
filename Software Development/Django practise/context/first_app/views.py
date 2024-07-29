from django.shortcuts import render
import datetime

def home(request):
    d={'author':'shawmitra',
       'age':24,
       'lst':['python','database','django'],
       'birthday' : datetime.datetime.now(),
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
