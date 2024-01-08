
class Gadget:
    def __init__(self,brand,price,color,origin) -> None:
        self.brand=brand
        self.price=price
        self.color=color
        self.origin=origin
    def run(self):
        return f'Running laptop:{self.brand}'
        

class laptop:
    def __init__(self,memory,ssd):
        self.memory=memory
        self.ssd=ssd
    
    def coding(self):
        return 'learning python and practicing'
    
class Phone(Gadget):
    def __init__(self,brand,price,color,sim,origin) -> None:
        self.sim=sim
        super().__init__(brand,price,color,origin)
    
    def phone_call(self,number,text):
        return f'sending sms to: {number} with : {text}'
    def __repr__(self) -> str:
        return f'phone:{self.brand} {self.price} {self.sim}'
class Camera:
    def __init__(self,pixel) -> None:
        self.pixel=pixel
    
    def change_lens(self):
        pass


# inheritance
my_phone=Phone('iphone',120000,'silver','china',True)
print(my_phone.brand)
        