from abc import ABC,abstractmethod #abstract base class
class Animal(ABC):
    @abstractmethod
    def eat(self):
        print("I am very Hungry.I need food")
    @abstractmethod
    def move(self):
        pass
class Monkey(Animal):
    def __init__(self,name) -> None:
        self.category='Monkey'
        self.name=name
        super().__init__()
    
    def eat(self):
        print('I am eating burger')
    def move(self):
        print('I like jumping')

dumkey=Monkey('dumkey')
dumkey.eat()
dumkey.move()
