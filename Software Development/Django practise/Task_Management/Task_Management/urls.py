
from django.contrib import admin
from . import views
from django.urls import path,include

urlpatterns = [
    path('admin/', admin.site.urls),
    path('',views.home,name='home'),
    path('task/',include('task.urls')),
    path('categories/',include('categories.urls'))
]
