# Generated by Django 5.0.3 on 2024-08-29 18:56

from django.db import migrations, models


class Migration(migrations.Migration):

    initial = True

    dependencies = [
        ('categories', '0001_initial'),
    ]

    operations = [
        migrations.CreateModel(
            name='Task',
            fields=[
                ('id', models.BigAutoField(auto_created=True, primary_key=True, serialize=False, verbose_name='ID')),
                ('title', models.CharField(max_length=250)),
                ('description', models.TextField()),
                ('is_complete', models.BooleanField(default=False)),
                ('assign_data', models.DateField()),
                ('category', models.ManyToManyField(to='categories.categories')),
            ],
        ),
    ]
