from django.shortcuts import render
from . forms import RegisterFrom
from django.contrib import messages

# Create your views here.
def home(request):
    if request.method == 'POST':
      form=RegisterFrom(request.POST)
      if form.is_valid():
        messages.success(request,'Account Created successfully')
        form.save()
        print(form.cleaned_data)
    else:
       form=RegisterFrom()
    return render(request,'home.html',{'form': form})