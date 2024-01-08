class Bank:
    def __init__(self,name,initial_deposit) -> None:
        self.name=name #public attribute
        self._branch='Barishal' #protected
        self.__balance=initial_deposit #private

    def deposit(self,amount):
        self.__balance+=amount
    
    def get_balance(self):
        return self.__balance

    def withdraw(self,amount):
        if amount<self.__balance:
            self.__balance=self.__balance-amount
            return amount
        else:
            return f'No enough balance'
brac=Bank('Shawmitra',10000)
print(brac.name)
brac.deposit(50000)
print(brac.get_balance())
print(brac._Bank__balance)