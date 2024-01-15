from Menu import Pizza,Burger,Drinks,Menu
from restaurant import Restaurant
from user import Chef,Customer,Server,Manager
from order import Order
def main():
    menu=Menu()

    pizza_1=Pizza('shutki',600,'large',['onion','shutki'])
    menu.add_menu_item('pizza',pizza_1)
    pizza_2=Pizza('alu',550,'large',['onion','shutki'])
    menu.add_menu_item('pizza',pizza_2)
    pizza_3=Pizza('jhal',440,'large',['onion','shutki'])
    menu.add_menu_item('pizza',pizza_3)

    Burger_1=Pizza('naga Burger',600,'chiken',['onion','shutki'])
    menu.add_menu_item('burger',Burger_1)
    Burger_2=Pizza('chiken Burger',400,'chiken',['onion','shutki'])
    menu.add_menu_item('burger',Burger_2)
    Burger_3=Pizza('hot Burger',300,'chiken',['onion','shutki'])
    menu.add_menu_item('burger',Burger_3)

    coke=Drinks('coke',50,True)
    menu.add_menu_item('drinks',coke)    
    coffe=Drinks('coffe',150,False)
    menu.add_menu_item('drinks',coffe)    

    menu.show_menu()
    restaurant=Restaurant('hotplate',2000,menu)
    manager=Manager('shawkat',5,'s@gmail.com','Barishal',1500,'jan 1 2020','core')
    restaurant.add_employee('manager',manager)
    chef=Chef('Rustom',6,'r@gmail.com','rustomnagar',3500,'feb 1,2020','chef','everything')
    restaurant.add_employee('chef',chef)
    server=Server('abdullah',6,'a@gmail.com','restaurant',200,'march-1 2024','5')
    restaurant.add_employee('server',server)

    #Show employee
    restaurant.show_employees()

    #customer
    customer_1=Customer('Shawmitra Das',6,'shawmintra@gmail.com','gulshan',100000)
    order_1=Order(customer_1,[pizza_1,coffe])
    customer_1.pay_for_order(order_1)
    restaurant.add_order(order_1)

    #customer one pay for order
    restaurant.receive_payment(order_1,2000,customer_1)

    print('reveneu and balance',restaurant.reveneu,restaurant.balance)
    


if __name__=='__main__':
    main()