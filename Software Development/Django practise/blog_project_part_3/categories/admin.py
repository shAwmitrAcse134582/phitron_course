from django.contrib import admin
from . import models

# Register your models here.

class CategoryAdmin(admin.ModelAdmin):  # Corrected here
    prepopulated_fields = {'slug': ('name',)}  # Note the comma in ('name',) since it's a tuple
    list_display = ['name', 'slug']

admin.site.register(models.Category, CategoryAdmin)

    
