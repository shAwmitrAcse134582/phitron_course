from django.shortcuts import render

# Create your views here.
def home(request):
    return render(request,'home.html')

def about(request):
    return render(request,'about.html')


def form(request):
    sub_data = None
    if request.method == 'POST':
        name = request.POST.get('name')
        email = request.POST.get('email')
        sub_data = {
            'name': name,
            'email': email,
        }
    return render(request, 'form.html', {'sub_data': sub_data})



    