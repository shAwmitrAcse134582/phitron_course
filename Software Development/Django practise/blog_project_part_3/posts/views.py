from django.shortcuts import render,redirect
from . import forms
from django.urls import reverse_lazy
from . import models
from django.contrib.auth.decorators import login_required
from django.utils.decorators import method_decorator
from django.views.generic import CreateView,UpdateView,DeleteView,DetailView

# Create your views here.
# @login_required
# def add_post(request):
#     if request.method =='POST':
#         post_form=forms.PostForm(request.POST)
#         if post_form.is_valid():
#              # post_form.cleaned_data['author'] = request.user
#             post_form.instance.author=request.user
#             post_form.save()
#             return redirect('add_post')
#     else:
#         post_form=forms.PostForm()
#     return render(request,'post.html',{'form' : post_form})

# Add post using class based views

@method_decorator(login_required,name='dispatch')
class AddPostCreateview(CreateView):
    model = models.Post
    form_class = forms.PostForm  # Corrected typo from 'from_class' to 'form_class'
    template_name = 'post.html'
    success_url = reverse_lazy('add_post')

    def form_valid(self, form):
        form.instance.author = self.request.user  # Set the author to the current user
        return super().form_valid(form)


@login_required
def edit_post(request,id):
    post=models.Post.objects.get(pk=id)
    post_form=forms.PostForm(instance=post)

    if request.method =='POST':
        post_form=forms.PostForm(request.POST,instance=post)
        if post_form.is_valid():
            post_form.instance.author=request.user
            post_form.save()
            return redirect('homepage')
    
    return render(request,'post.html',{'form' : post_form})

# update view
@method_decorator(login_required,name='dispatch')
class EditPostView(UpdateView):
      model=models.Post
      form_class=forms.PostForm
      template_name='post.html'
      pk_url_kwarg='id'
      success_url=reverse_lazy('profile')



@login_required
def delete_post(request,id):
     post=models.Post.objects.get(pk=id)
     post.delete()
     return redirect('homepage')

# delete view

@method_decorator(login_required,name='dispatch')
class DeletePostView(DeleteView):
      model=models.Post
      template_name='delete.html'
      pk_url_kwarg='id'
      success_url=reverse_lazy('profile')


class DetailPostView(DetailView):
    model = models.Post
    pk_url_kwarg = 'id'
    template_name = 'post_details.html'
    