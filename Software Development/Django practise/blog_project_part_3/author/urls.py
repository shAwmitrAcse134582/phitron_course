
from django.urls import path
from . import views
# from django.contrib.auth.views import LogoutView
# from .views import UserLogoutViews


urlpatterns = [
    path('register/',views.register,name='register'),
    # path('login/',views.user_login,name='user_login'),
    path('login/',views.UserLogInview.as_view(),name='user_login'),
    path('logout/',views.user_logout,name='user_logout'),
    # path('logout/',views.UserLogoutViews.as_view(),name='user_logout'),
    path('profile/',views.profile,name='profile'),
    path('profile/edit/',views.edit_profile,name='edit_profile'),
    path('profile/edit/pass_change/',views.pass_change,name='pass_change')
]