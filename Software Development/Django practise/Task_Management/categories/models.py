from django.db import models


class Categories(models.Model):
    cat_name=models.CharField(max_length=250)



    def __str__(self) -> str:
        return self.cat_name




