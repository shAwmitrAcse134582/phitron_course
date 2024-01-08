class Family:
    def __init__(self,address) -> None:
        self.address=address
        print(f'{self.address}')
class School:
    def __init__(self,id,level) -> None:
        self.id=id
        self.level=level
        return f'{self.id} {self.level}'
class Sports:
    def __init__(self,game) -> None:
        self.game=game
        return f'{self.game}'

class Student(Family,School,Sports):
    def __init__(self, address,id,level,game) -> None:
        School.__init__(self,address,id,level,game)
        Sports.__init__(self,id,level)
        Family.__init__(self,address)


person1=Family('barishal')      

# student=Student('Barishal',1001,'A','Cricket')
# print(student)