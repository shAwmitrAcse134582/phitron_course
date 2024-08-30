from django.db import models
from categories.models import Categories



class Task(models.Model):
    title=models.CharField(max_length=250)
    description=models.TextField()
    is_complete=models.BooleanField(default=False)
    assign_data=models.DateField()
    category=models.ManyToManyField(Categories)

    def __str__(self) -> str:
        return self.title

