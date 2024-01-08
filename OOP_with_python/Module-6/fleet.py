class Company:
    def __init__(self,name,address) -> None:
        self.name=name
        self.address=address
        self.bus=[]
        self.drivers=[]
        self.routes=[]
        self.manager=[]
        self.supervisor=[]

class Driver:
    def __init__(self,name,license,age) -> None:
        self.license=license
        self.name=name
        self.age=age
class Counter:
    def __init__(self) -> None:
        pass
    def purchase_ticket(self,start,destination):
        pass

class Passenger:
    pass
class supervisor:
    pass

person1=Driver('salam',1233,34)
print(person1.name)