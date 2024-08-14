from django import forms
from django.core import validators

#widget == field to html input

class contactForm(forms.Form):
    name = forms.CharField(label='username',initial='Shawmitra',help_text='Total length must be within 80 characters',required=False,widget=forms.Textarea(attrs={'id' : 'text_area','class' :'class1 class2'}))
    email = forms.EmailField(label='useremail')
    # age = forms.IntegerField()
    age=forms.CharField(widget=forms.NumberInput)
    weight = forms.FloatField()
    balance = forms.DecimalField(required=False,disabled=True)
    check = forms.BooleanField()
    birthday = forms.DateField(widget=forms.DateInput(attrs={'type' : 'date'}))
    appointment = forms.DateField(widget=forms.DateInput(attrs={'type' : 'datetime-local'}))
    
    CHOICES = [('S', 'Small'), ('M', 'Medium'), ('L', 'Large')]
    size = forms.ChoiceField(choices=CHOICES, widget=forms.RadioSelect)
    
    MEAL_CHOICES = [('p', 'Pepperoni'), ('m', 'Mushroom')]  
    pizza = forms.MultipleChoiceField(choices=MEAL_CHOICES,widget=forms.CheckboxSelectMultiple) 
    file =forms.FileField()

class StudentData(forms.Form):
    name = forms.CharField(
        widget=forms.TextInput,
        validators=[validators.MinLengthValidator(10, message='Enter a name with at least 10 characters')]
    )
    email = forms.EmailField(widget=forms.EmailInput,validators=[validators.EmailValidator(message='Enter a valid Email')])

    age = forms.IntegerField(
        validators=[validators.MinValueValidator(24, message='Age must be at least 24')]
    )
    file=forms.FileField(validators=[validators.FileExtensionValidator(allowed_extensions=['pdf'],message='file extention must be ended with pdf')])



    # def clean_name(self):
    #     valname=self.cleaned_data['name']
    #     if len(valname) < 10:
    #         raise forms.ValidationError('Enter a name with atleast 10 characters')
    #     return valname
    # def clean_email(self):
    #     valemail=self.cleaned_data['email']
    #     if '.com' not in valemail:
    #         raise forms.ValidationError('Your email must contain .com')
    #     return valemail

    # def clean(self):
    #     cleaned_data = super().clean()
    #     valname = self.cleaned_data['name']
    #     valemail = self.cleaned_data['email']
    #     if len(valname) < 10:
    #         raise forms.ValidationError('Enter a name with at least 10 characters')
        

    #     if '.com' not in valemail:
    #         raise forms.ValidationError('Your email must contain .com')

class passwordValidation(forms.Form):
    name = forms.CharField(widget=forms.TextInput(attrs={'placeholder': 'Enter your name'}))
    password = forms.CharField(widget=forms.PasswordInput(attrs={'placeholder': 'Enter password'}))
    confirm_password = forms.CharField(widget=forms.PasswordInput(attrs={'placeholder': 'Confirm password'}))

    def clean(self):
        cleaned_data = super().clean()
        val_name=self.cleaned_data['name']
        password = cleaned_data.get('password')
        confirm_password = cleaned_data.get('confirm_password')

        if password != confirm_password:
            raise forms.ValidationError("Passwords do not match")
        if len(val_name) < 15:
            raise forms.ValidationError('Names length should be at least 15 characters')
        
        return cleaned_data
    
     


