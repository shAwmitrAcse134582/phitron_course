from django import forms

class contactForm(forms.Form):
    name = forms.CharField(label='username')
    email = forms.EmailField(label='useremail')
    age=forms.IntegerField()
    weight=forms.FloatField()
    balance=forms.DecimalField()
    check=forms.BooleanField()
    birthday=forms.DateField()
    appoinment=forms.DateField()