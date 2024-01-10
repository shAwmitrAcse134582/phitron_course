class Person:
    def __init__(self,name,age,height,weight) -> None:
        self.name=name
        self.age=age
        self.height=height
        self.weight=weight

    def eat(self):
        print('I eat rice')
    
    def excercise(self):
        print('I walk regularly in the morning')

class Cricketer(Person):
    def __init__(self,name,age,height,weight,team) -> None:
        self.team=team
        super().__init__(name,age,height,weight)
    
    #override
    def eat(self):
        print('I eat fruits')
        
    def excercise(self):
        print('I run in the morning regularly')
        
        #+ operator overloaded
    def __add__(self,other):
        return self.age + other.age

kohli=Cricketer('kohli',35,6,80,'india')
dhoni=Cricketer('dhoni',45,6,80,'india')
kohli.eat()
print(kohli + dhoni)
        
        