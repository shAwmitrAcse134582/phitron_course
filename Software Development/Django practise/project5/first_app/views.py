from django.shortcuts import render, redirect
from . form import contactForm
from . form import StudentData
from . form import passwordValidation

# Create your views here.
def home(request):
    return render(request, 'home.html')

def about(request):
    sub_data = None
    if request.method == 'POST':
        name = request.POST.get('name')
        email = request.POST.get('email')
        select = request.POST.get('select')

        sub_data = {
            'name': name,
            'email': email,
            'select': select,
        }
    return render(request, 'about.html', {'sub_data': sub_data})

def form_view(request):
    return render(request, 'form.html')

def DjangoForm(request):
        if request.method == 'POST':
            form = contactForm(request.POST,request.FILES)
            if form.is_valid():
                file = form.cleaned_data['file']
                with open('./first_app/upload/'+ file.name,'wb+') as destination:
                     for chunk in file.chunks():
                          destination.write(chunk)
                     
                print(form.cleaned_data)
                return render(request, 'django_form.html', {'form': form})
        else:
            form=contactForm()
        
        return render(request, 'django_form.html', {'form': form})

def StudentForm(request):
    if request.method == 'POST':
        form = StudentData(request.POST, request.FILES)
        if form.is_valid():
            print(form.cleaned_data)
    else:
        form = StudentData()

    return render(request, 'django_form.html', {'form': form})


def passwordValidationForm(request):
    if request.method == 'POST':
        form = passwordValidation(request.POST)
        if form.is_valid():
            print(form.cleaned_data)
            # Process the form data
    else:
        form = passwordValidation()

    return render(request, 'django_form.html', {'form': form})

    

