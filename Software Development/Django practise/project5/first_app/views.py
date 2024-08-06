from django.shortcuts import render

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
            'select':select,
        }
    return render(request, 'about.html', {'sub_data': sub_data})

def form(request):
    return render(request, 'form.html')
