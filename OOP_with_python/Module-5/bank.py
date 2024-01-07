class bank:
    def __init__(self,balance):
        self.balance=balance
        self.min_withdraw=100
        self.max_withdraw=100000

    def get_balance(self):
        return self.balance
    def check_balance(self):
        print(f'Now your account has {self.balance} taka')
    
    def deposit(self,amount):
        if amount>0:
            self.balance+=amount

    def withdraw(self,amount):
        if amount<self.min_withdraw:
            print(f'You cant withdraw below {self.min_withdraw}')
        elif amount>self.max_withdraw:
             print('You can not withdraw more than {self.max_withdraw}')
        else:
            self.balance-=amount
            print(f'here is your maney {amount}')
            print(f'your balance after withdraw: {self.get_balance()}')

brac=bank(20000)
brac.withdraw(500)
brac.withdraw(50)
brac.deposit(5000)
brac.get_balance()
brac.withdraw(1000)
brac.check_balance()