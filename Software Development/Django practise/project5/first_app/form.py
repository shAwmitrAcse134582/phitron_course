from django import forms


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