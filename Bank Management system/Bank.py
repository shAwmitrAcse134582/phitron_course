
import random

class Account:
    def __init__(self) -> None:
        self.accounts={}
        self.total_balance=0
        self.total_loan=0
        self.loanStatus=1
        self.isBankrupt=0
    
    def create_user(self):
        name=input('Enter your name : ')
        email=input('Enter your email : ')
        password=input('Enter your password : ')
        ac_type=input('Provide Account Type : (savings/Current) : ')
        address=input('Enter your permanent address : ')
        ac_number=random.randint(10,1000)

        self.accounts[ac_number]={
            'name':name,
            'email':email,
            'password':password,
            'ac_type':ac_type,
            'address':address,
            'transactions':[],
            'balance':0,
            'loan':0
        }
        print(f'Congratutalion!!Successfully you have created Your account.Account Number : {ac_number} password : {password}')
    
    def withdraw(self,ac_number,amount):
        if self.isBankrupt == 0:
            if ac_number in self.accounts:
                if self.accounts[ac_number]['balance']>=amount:
                    self.total_balance-=amount
                    self.accounts[ac_number]['balance']-=amount
                    self.accounts[ac_number]['transactions'].append(amount)
                    print(f'Congratulation!!You have successfully withdraw {amount} tk from your balance')
                else:
                    print('sorry!!You have no enough balance to withdraw')
                
            else:
                print('sorry!!Account Number is not found.please provide valid account number!!')

    def deposit(self,ac_number,amount):
        if ac_number in self.accounts:
            self.accounts[ac_number]['balance']+=amount
            self.total_balance+=amount
            self.accounts[ac_number]['transactions'].append(amount)
            print(f'successfully you have deposited {amount} tk to your balance')
        else:
            print('sorry!!Account Number is not found.please provide valid account number!!')

    def  available_balance(self,ac_number):
        if ac_number in self.accounts:
            print(f'Current Balance : {self.accounts[ac_number]["balance"]} tk')  
        else:
            print('sorry!!Account Number is not found.please provide valid account number!!')

    def transfer_balance(self,sender,receiver,amount):
        if sender in self.accounts and receiver in self.accounts:
            if self.accounts[sender]['balance'] < amount:
                print('You have no enough money in your account')

            else:
                self.accounts[sender]['balance']-=amount
                self.accounts[sender]['transactions'].append(amount)
                print(f'successfully transferred balance {amount} tk {sender} to {receiver}')
                self.accounts[receiver]['balance'] +=amount
                self.accounts[receiver]['transactions'].append(amount)
                print(f'successfully receive balance {amount} tk {receiver} from {sender}')
        else:
            print('Sorry!! Account Number is not found. Please provide a valid account number!!')
    
    def check_transaction_history(self,ac_number):
        if ac_number in self.accounts:
            for transaction in self.accounts[ac_number]['transactions']:
                print(f'Transaction History : {transaction}')
        else:
             print('sorry!!Account Number is not found.please provide valid account number!!')
             
    def takeLoan(self, ac_number, amount):
        if self.loanStatus == 1:
            if ac_number in self.accounts:
                if self.accounts[ac_number]['loan'] < 2:
                    self.total_loan += amount
                    self.accounts[ac_number]['loan'] += 1
                    self.accounts[ac_number]['balance'] += amount
                    self.total_balance -= amount
                    self.accounts[ac_number]['transactions'].append(amount)
                    print(f'You have taken a loan of {amount} tk successfully!!')
                else:
                    print('Sorry! You have already taken a loan two times')
            else:
                print('Sorry!! Account Number is not found. Please provide a valid account number!!')
        else:
            print('Loan is not available now!!')
    
    def transfer_balance(self,sender,receiver,amount):
        if sender in self.accounts and receiver in self.accounts:
            if self.accounts[sender]['balance'] < amount:
                print('You have no enough money in your account')

            else:
                self.accounts[sender]['balance']-=amount
                self.accounts[sender]['transactions'].append(amount)
                print(f'successfully transferred balance {amount} tk {sender} to {receiver}')
                self.accounts[receiver]['balance'] +=amount
                self.accounts[receiver]['transactions'].append(amount)
                print(f'successfully receive balance {amount} tk {receiver} from {sender}')
        else:
            print('Sorry!! Account Number is not found. Please provide a valid account number!!')
    
    def checkBankrupt(self,bankrupt):
        self.bankrupt=bankrupt
    
    def delete_account(self,ac_number):
        if ac_number in self.accounts:
            del self.accounts[ac_number]
            print(f'Account {ac_number} is deleted successfully!!')
        else:
            print('Sorry!! Account Number is not found. Please provide a valid account number!!')
    def show_user(self):
        if self.accounts:
            for ac_number, val in self.accounts.items():
                print(f"Account Number: {ac_number},Name:{val['name']},Email : {val['email']}, Address : {val['address']},Balance : {val['balance']}")
        else:
            print('Sorry!! Account Number is not found. Please provide a valid account number!!')

    def check_bank_loan(self):
        print(f'Total Bank loan is {self.total_loan}')
    
    def check_current_balance(self):
        print(f'current Balance of the Bank : {self.total_balance}')
    
    def loanControl(self,status):
        self.status=status
    def isValidAccount(self,ac_number,password):
        if ac_number in self.accounts and password == self.accounts[ac_number]['password']:
            return True
        else:
            return False
    
    
            
        


    

    

    





    


          
               
                   
                

               
        


                
                   


        


    
            

                    


    