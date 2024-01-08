class laptop:
    def __init__(self,brand,price,color,memory):
        self.brand=brand
        self.price=price
        self.color=color
        self.memory=memory
    
    def run(self):
        return f'Running laptop: {self.brand}'
    
    def coding(self):
        return 'learning python and practicing'
    
class Phone:
    def __init__(self,brand,price,color,sim) -> None:
        self.brand=brand
        self.price=price
        self.color=color
        self.sim=sim
    def run(self):
        return f'calling to someone'
    def phone_call(self,number,text):
        return f'sending sms to: {number} with : {text}'

class Camera:
    def __init__(self,brand,price,color,pixel) -> None:
        self.brand=brand
        self.price=price
        self.color=color
        self.pixel=pixel
    def run(self):
        pass
    def change_lens(self):
        pass
        