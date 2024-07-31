from django.contrib import admin
from django.urls import path, include
from . import views

urlpatterns = [
    path('admin/', admin.site.urls),
    path('', views.home, name='home'),
    path('index/', views.index, name='index'),
    path('first_app/', include('first_app.urls')),  
    path('navigations/', include('navigations.urls')),
]
