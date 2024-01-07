class shop:
    cart=[]
    def __init__(self,buyer):
        self.buyer=buyer
    def add_to_cart(self,item):
        self.cart.append(item)

person1=shop('Shawmitra')
person1.add_to_cart('shoes')
person1.add_to_cart('watch')

print(person1.cart)

person2=shop('ashik')
person2.add_to_cart('shirt')
person2.add_to_cart('pant')

print(person2.cart)