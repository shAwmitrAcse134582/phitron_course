# Generated by Django 5.0.3 on 2024-08-14 17:40

from django.db import migrations, models


class Migration(migrations.Migration):

    dependencies = [
        ('first_app', '0002_student_mobile_no'),
    ]

    operations = [
        migrations.AlterField(
            model_name='student',
            name='mobile_No',
            field=models.IntegerField(default='012345678'),
        ),
    ]