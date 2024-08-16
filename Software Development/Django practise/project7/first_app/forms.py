from django import forms
from first_app.models import StudentModel

class StudentForm(forms.ModelForm):
    class Meta:
        model = StudentModel
        fields ='__all__'
        # exclude=['roll']
        labels={
            'name' : 'Student Name',
            'roll' :'Student roll',
        }

        widgets = {
            'name': forms.TextInput(attrs={'class': 'fw-bold'}),  # Corrected syntax
            # 'roll': forms.PasswordInput(),  # No need to pass attrs if not customizing
        }
        help_texts={
            'name': "Write your full name"
        }
        error_messeges={
            'name': {'required' : 'Your name is required'}
        }

