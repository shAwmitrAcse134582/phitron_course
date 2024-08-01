from abc import ABC,abstractmethod

class Account(ABC):
    accounts=[]

    def __init__(self,name,accNumber,password,type) -> None:
        self.name=name
        self.accNumber=accNumber
        self.password=password
        self.balance=0
        self.type=type
        Account.accounts.append(self)
    def changeInfo(self,name):
        self.name=name
        print(f'Name is changed of {self.accNumber}')
    
    def  changeInfo(self,name,password):
        self.name=name
        self.password=password
        print(f'Name and password are chaanged of {self.accNumber}')

    def deposit(self,amount):
        if amount>=0:
            self.balance+=amount
            print(f'Deposited amount {amount} New balance {self.balance}')
        
        else:
            print('Invalid deposit amount')
    
    def withdraw(self,amount):
        if amount>=0 and amount<=self.balance:
            self.balance-=amount
            print(f'Withdraw {amount} New Balance : {self.balance}')
        else:
            print('Invalid withdaw amount')
    
    @abstractmethod
    def showInfo(self):
        pass
class SavingsAccount(Account):
    def __init__(self, name, accNumber, password, interestRate) -> None:
        super().__init__(name, accNumber, password, 'Savings')
        self.interestRate=interestRate

    def apply_interest(self):
        interest=self.balance * (self.interestRate/100)
        print('Interest is applied!!')
        self.deposit(interest)

    def showInfo(self):
        print(f'Information of {self.type} account of {self.name}')
        print(f'Account type : {self.type}')
        print(f'Name: {self.name}')
        print(f'account No : {self.accNumber}')
        print(f'current Balance : {self.balance}')


class SpecialAccount(Account):
    def __init__(self, name, accNumber, password, limit) -> None:
        super().__init__(name, accNumber, password, "special")
        self.limit=limit
    
    def withdraw(self, amount):
        if amount > 0 and (self.balance - amount)>=- self.limit:
            self.balance-=amount
            print(f'Withdraw {amount} New Balance: {self.balance}')
        else:
            print('Invalid withdraw amount')
    
    def showInfo(self):
        print(f'Information of {self.type} account of {self.name}')
        print(f'Account type : {self.type}')
        print(f'Name: {self.name}')
        print(f'account No : {self.accNumber}')
        print(f'current Balance : {self.balance}')

currentUser=None
while True:
    if (currentUser==None):
        print('No Used Logged in!!!')
        ch=input('Register/Log in (R/L) : ')
        if ch=='R':
            name=input('Name : ')
            accNo=input('Account Number : ')
            password=input('password : ')
            a=input('chose savings account or special account : (sp/sv)')
            if a=='sv':
                ir=int(input("Interest rate : "))
                currentUser=SavingsAccount(name,accNo,password,ir)
            else:
                limit=int(input('Overdraf Limit : '))
                currentUser=SpecialAccount(name,accNo,password,limit)
    else:
        print('Welcome {currentUser.name}')

        if(currentUser.type=='Savings'):
            print("1. Withdraw")
            print("2. Deposit")
            print("3. Show Info")
            print("4. change Info")
            print("5. Apply Interset")
            print("6. Logout\n")

            op=int(input('choose option : '))

            if op==1:
                amount=int(input("Enter withdraw amount:"))
                currentUser.withdraw(amount)
                
            elif op==2:
                amount=int(input("Enter deposit amount:"))
                currentUser.deposit(amount)
            
            elif op==3:
                currentUser.showInfo()
            
            elif op==4:
                print("Homework")
            
            elif op==5:
                currentUser.apply_interest()
            
            elif op==6:
                currentUser=None
            else:
                print("Invalid Option")
        else:
            print("1. Withdraw")
            print("2. Deposit")
            print("3. Show Info")
            print("4. change Info")
            print("5. Logout\n")
            
            
            op=int(input("Chhose Option:"))
            
            if op==1:
                amount=int(input("Enter withdraw amount:"))
                currentUser.withdraw(amount)
                
            elif op==2:
                amount=int(input("Enter deposit amount:"))
                currentUser.deposit(amount)
            
            elif op==3:
                currentUser.showInfo()
            
            elif op==4:
                print("Homework")
            
            elif op==5:
                currentUser=None
            
            else:
                print("Invalid Option")







        