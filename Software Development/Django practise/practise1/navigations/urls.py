from django.urls import path
from . import views

urlpatterns = [

    path('nav/', views.about, name='about'),
    path('contact/', views.contact, name='contact'),
    
]
