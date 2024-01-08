class Animal:
    def __init__(self,name) -> None:
        self.name=name
    
    def make_sound(self):
        print('animal making sound goo')

class Cat(Animal):
    def __init__(self, name) -> None:
        super().__init__(name)
    def make_sound(self):
        print('meow meow')

class Dog(Animal):
    def __init__(self, name) -> None:
        super().__init__(name)
    def make_sound(self):
        print('gheu gheu')

pushy=Cat('Pushy')
pushy.make_sound()

tom=Dog('tom')
tom.make_sound()
    
        

        