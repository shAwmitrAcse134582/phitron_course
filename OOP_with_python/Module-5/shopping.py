class shopping:
    def __init__(self,name):
        self.name=name
        self.cart=[]

    def add_to_cart(self,item,price,quantity):
        product={'item':item,'price':price,'quantity':quantity}
        self.cart.append(product)
    
    def checkout(self,amount):
        total=0
        for item in self.cart:
            total+=item['price'] * item['quantity']
        print(f'total {total} taka')
        if amount>total:
            balance=abs(total - amount)
            print(f'Balance {balance} taka')
        else:
            extra=abs(amount-total)
            print(f'please added {extra} money')

person=shopping('Shawmitra')
person.add_to_cart('shirt',1000,2)
person.add_to_cart('pant',2000,3)
person.add_to_cart('shoes',1500,1)

print(person.cart)
person.checkout(3000)
