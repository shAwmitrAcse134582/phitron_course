from django.shortcuts import render, redirect
from . form import contactForm

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
        form = contactForm(request.POST)
        if form.is_valid():
            # Process the form data here
            return render(request, 'form_success.html', {'form': form.cleaned_data})
        else:
            print(form.errors)  # Print the errors if the form is invalid
    else:
        form = contactForm()
    
    return render(request, 'django_form.html', {'form': form})
