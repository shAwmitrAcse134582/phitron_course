class User:
    def __init__(self,name,age,money) -> None:
        self.name=name
        self._age=age
        self.__money=money

    #getter without any setter is readonly attribute
    @property
    def age(self):
        return self._age
    
    #getter
    @property
    def salary(self):
        return self.__money
    
    #setter
    @salary.setter
    def salary(self,value):
        if value<0:
            return 'salary can not be negative'
        self.__money+=value

person=User('shawmitra',23,20000)
print(person.age)
person.salary=5000
print(person.salary)
       
