from shopping_Mall import User,Customer,Seller,Product,Shopping_mall
def main():
    easy=Shopping_mall('easy')
    ashik=User('ashik','ashik@gmail.com',123)
    easy.add_seller(ashik)
    product_1=Product('shirt',1200,5,'ashik')
    ashik.add_product(product_1)
    ashik.view_products()
if __name__=='__main__':
    main()