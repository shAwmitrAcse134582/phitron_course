from Menu import Pizza,Burger,Drinks,Menu
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

if __name__=='__main__':
    main()