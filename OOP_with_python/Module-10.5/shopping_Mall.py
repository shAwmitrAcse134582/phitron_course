
class User:
    def __init__(self,name,email,password) -> None:
        self.name=name
        self.email=email
        self.password=password
class Customer(User):
    def __init__(self, name, email, password) -> None:
        super().__init__(name, email, password)
    
    def add_balance(self,amount):
        if 0<amount:
            self.wallet+=amount
    def purchase_product(self,product):
         if product.price < self.wallet:
             product.place_order()
             self.wallet-=product
         else:
            print("You can't buy this product because you have no enough money'")

class Seller(User):
    def __init__(self, name, email, password) -> None:
        super().__init__(name, email, password)
        self.products=[]
    
    def add_product(self,product):
        self.products.append(product)
        Shopping_mall().update_product(product)

class Product:
    def __init__(self,name,price,stock,seller) -> None:
        self.name=name
        self.price=price
        self.stock=stock
        self.seller=seller

    def place_order(self):
        self.seller.wallet+=self.price
        self.stock-=1
class Shopping_mall:
    def __init__(self,name) -> None:
        self.name=name
        self.sellers=[]
        self.products=[]
    
    def add_seller(self,seller):
        self.sellers.append(seller)
    
    def update_product(self,product):
        self.products.append(product)
    def view_products(self):
        for product in self.products:
            if product.stock>0:
                print(f'product name: {product.name} price : {product.price} stock: {product.price}')

        

            

        
    

        