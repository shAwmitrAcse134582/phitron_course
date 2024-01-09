class Product:
    def __init__(self,name,code,price,quantity) -> None:
        self.name=name
        self.code=code
        self.price=price
        self.quantity=quantity

class Shop:
    def __init__(self,name) -> None:
        self.name=name
        self.cart=[]
    def add_product(self,product):
        self.cart.append(product)
    
    def buy_product(self,p_name):
        for product in self.cart:
            if product.name == p_name:
                return f'Congrats! You Have bought {p_name}'
           
        return f'sorry!,{p_name} is not available'
    
    def checkout(self,amount):
        total=0
        for product in self.cart:
            total+=product.price * product.quantity
        if amount>total:
            balance=amount-total
            print(f'Balance {balance} taka')
        else:
            extra=total - amount
            print(f'You have to added {extra} taka')
        
            

easy=Shop('easy')
easy.add_product(Product('shirt',101,1200,2))
easy.add_product(Product('t-shirt',102,800,3))
easy.add_product(Product('pant',103,2000,1))
easy.add_product(Product('shoes',104,3000,1))

print(easy.buy_product('shirt'))
print(easy.buy_product('hoody'))
print(easy.checkout(2000))







        
        
        
