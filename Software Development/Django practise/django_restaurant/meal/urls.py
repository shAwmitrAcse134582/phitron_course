


from django.urls import path
from .import views

urlpatterns = [
 
    path('index/',views.meal,name='meal'),
    
]