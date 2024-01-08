from math import pi

class Shape:
    def __init__(self,name) -> None:
        self.name=name

class Rectangle(Shape):
    def __init__(self, name,length,width) -> None:
        self.length=length
        self.width=width
        
        super().__init__(name)

    def area(self):
        print( self.length * self.width)
class circle(Shape):
    def __init__(self, name,radius) -> None:
        self.radius=radius
        super().__init__(name)

    def area(self):
        return pi*self.raduis*self.radius

area1=Rectangle('rec',4,4)
area1.area()
        