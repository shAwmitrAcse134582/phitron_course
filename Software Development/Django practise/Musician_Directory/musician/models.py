from django.db import models

# Create your models here.
class Musician(models.Model):
    firstName=models.CharField(max_length=100)
    lastName=models.CharField(max_length=100)
    email=models.EmailField()
    phone_no=models.CharField(max_length=15)
    instrument_type=models.CharField(max_length=100)

    def __str__(self) -> str:
        return self.firstName + self.lastName
