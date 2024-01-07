class calculator:
    brand='casio'
    price=2000
    color='blue'

    def multiply(self,a,b):
        return a*b

my_cal=calculator()
mul=my_cal.multiply(3,4)
print(mul)