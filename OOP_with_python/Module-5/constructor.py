class phone:
    features=['camera','speaker','display']

    #constructor
    def __init__(self,owner,brand,price):
        self.owner=owner
        self.brand=brand
        self.price=price



my_phone=phone('shawmitra','xiaomi',25000)
print(my_phone.owner,my_phone.brand,my_phone.price)
friend=phone('Ashik',"Nokia",30000)
print(friend.owner,friend.brand,friend.price)

