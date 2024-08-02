from django.shortcuts import render

# Create your views here.
def meal(request):
    data = {
        "categories": [
            {
                "idCategory": "1",
                "strCategory": "Beef",
                "strCategoryThumb": "https://www.themealdb.com/images/category/beef.png",
                "strCategoryDescription": "Beef is the culinary name for meat from cattle, particularly skeletal muscle. Humans have been eating beef since prehistoric times. Beef is a source of high-quality protein and essential nutrients."
            },
            {
                "idCategory": "2",
                "strCategory": "Chicken",
                "strCategoryThumb": "https://www.themealdb.com/images/category/chicken.png",
                "strCategoryDescription": "Chicken is a type of domesticated fowl, a subspecies of the red junglefowl. It is one of the most common and widespread domestic animals, with a total population of more than 19 billion as of 2011. Humans commonly keep chickens as a source of food and, more rarely, as pets."
            },
            {
                "idCategory": "3",
                "strCategory": "Dessert",
                "strCategoryThumb": "https://www.themealdb.com/images/category/dessert.png",
                "strCategoryDescription": "Dessert is a course that concludes a meal. The course usually consists of sweet foods, such as confections dishes or fruit, and possibly a beverage such as dessert wine or liqueur. The term dessert can apply to many confections, such as biscuits, cakes, cookies, custards, gelatins, ice creams, pastries, pies, puddings, and sweet soups."
            },
            {
                "idCategory": "4",
                "strCategory": "Lamb",
                "strCategoryThumb": "https://www.themealdb.com/images/category/lamb.png",
                "strCategoryDescription": "Lamb, hogget, and mutton are the meat of domestic sheep at different ages. A sheep in its first year is called a lamb, and its meat is also called lamb. The meat of a juvenile sheep older than one year is hogget. The meat of an adult sheep is mutton."
            },
            {
                "idCategory": "5",
                "strCategory": "Miscellaneous",
                "strCategoryThumb": "https://www.themealdb.com/images/category/miscellaneous.png",
                "strCategoryDescription": "General foods that don't fit into another category. Lorem Ipsum is simply dummy text of the printing and typesetting industry. Lorem Ipsum has been the industry's standard dummy text ever since the 1500s."
            },
            {
                "idCategory": "6",
                "strCategory": "Pasta",
                "strCategoryThumb": "https://www.themealdb.com/images/category/pasta.png",
                "strCategoryDescription": "Pasta is a staple food of traditional Italian cuisine, with the first reference dating to 1154 in Sicily. Pasta is typically a noodle made from an unleavened dough of a durum wheat flour mixed with water or eggs and formed into sheets or various shapes."
            }
        ]
    }
    return render(request,'index.html',{'categories': data['categories']})