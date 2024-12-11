

from django.contrib import admin
from django.urls import path, include
from django.http import HttpResponseRedirect
from core.views import HomeView
urlpatterns = [
     path('', HomeView.as_view(),name='home'),
    path('admin/', admin.site.urls),
    path('accounts/', include('accounts.urls')),
    # path('', lambda request: HttpResponseRedirect('/accounts/register/')),
]

# accounts/login
# accounts/register
