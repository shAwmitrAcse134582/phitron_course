from Bank import Account
def main():
    bank=Account()
    Admin={
        'id' :1,
        'Name':'admin',
        'password':'123'
    }
    while(True):
        print('*************************')
        op=input('choose a option  for log in admin or user: (a/u): ')
        if op=='a':
            id=int(input('Enter Admin Id : '))
            password=input('Enter Admin Password : ')
            if(id==Admin['id'] and password==Admin['password']):
                while(True):
                    print('****Congratulation!!You are logged in as a admin!****')
                    print("1. Create User")
                    print("2. Delete User")
                    print("3. Show all User Accounts")
                    print("4. Show Total Balance")
                    print("5. Show Total Loan Amount")
                    print("6. Toggle Loan Feature")
                    print("7. Make Bank declare as Bankrupt")
                    print("8. Logout ")


                    ch=int(input('choose option: '))
                    if(ch==1):
                        bank.create_user()
                    elif(ch==2):
                        Account_Number=int(input('Enter Account Number : '))
                        bank.delete_account(Account_Number)
                    elif(ch==3):
                        bank.show_user()
                    elif(ch==4):
                        bank.check_current_balance()
                    elif(ch==5):
                        bank.check_bank_loan()
                    elif(ch==6):
                        ok=int(input('Enter 0 for off loan system: '))
                        bank.loanControl(ok)
                    elif(ch==7):
                        ok=int(input('Enter 1 for declare bank as Bankrupt : '))
                        bank.checkBankrupt(ok)
                    elif(ch==8):
                        break
            else:
                print('Invalid account Number or password.please provide valid account number and password!')
        
        elif op=='u':
            print('choose option for Register or logged in  (R/L) : ')
            ch=input('Choose option : ')

            if(ch=='R'):
                print('Enter valid Information : ')
                bank.create_user()
            elif(ch=='L'):
                Account_Number=int(input('Enter Account Number: '))
                password=input('Enter password: ')
                if(bank.isValidAccount(Account_Number,password)):
                    while(True):
                        print('***********Welcome Back*********')
                        print('*******You are logged In********')
                        print('1.Deposit.')
                        print('2.Withdraw.')
                        print('3.Check Balance.')
                        print('4.Transfer Balance')
                        print('5.Transaction History.')
                        print('6.Take Loan.')
                        print('7.LogOut')
                        

                        ch=int(input('Choose option: '))

                        if(ch==1):
                            Account_Number=int(input('Enter Account Number : '))
                            amount=int(input('Amount : '))
                            bank.deposit(Account_Number,amount)
                        elif(ch==2):
                            Account_Number=int(input('Enter Account Number : '))
                            amount=int(input('Amount : '))
                            bank.withdraw(Account_Number,amount)
                        elif(ch==3):
                            Account_Number=int(input('Enter Account Number : '))
                            bank.available_balance(Account_Number)
                        elif(ch==4):
                             Account_Number1=int(input('Enter sender Account Number : '))
                             Account_Number2=int(input('Enter Receiver Account Number : '))
                             amount=int(input('Amount : '))
                             bank.transfer_balance(Account_Number1,Account_Number2,amount)
                        elif(ch==5):
                            Account_Number=int(input('Enter Account Number : '))
                            bank.check_transaction_history(Account_Number)
                        elif(ch==6):
                            Account_Number=int(input('Enter Account Number : '))
                            amount=int(input('Amount : '))
                            bank.takeLoan(Account_Number,amount)
                        elif(ch==7):
                            break
            else:
                print('Invalid account Number or password.please provide valid account number and password!')

if __name__=='__main__':
    main()