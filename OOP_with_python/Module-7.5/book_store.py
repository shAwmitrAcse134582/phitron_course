class Book:
    def __init__(self,id,name,quantity) -> None:
        self.id=id
        self.name=name
        self.quantity=quantity

class User:
    def __init__(self,id,name,password) -> None:
        self.id=id
        self.name=name
        self.password=password
        self.borrowedBook=[]
        self.returnBook=[]

class Library:
    def __init__(self,name) -> None:
        self.users=[]
        self.books=[]
        self.name=name
    def addBook(self,id,name,quantity):
        book=Book(id,name,quantity)
        self.books.append(book)
        print(f'{book.name} is added succesfully!!!')
    def addUser(self,id,name,password):
        user=User(id,name,password)
        self.users.append(user)
        return user
    
    def borrowBook(self,user,token):

        for book in self.books:
            if book.name==token:
                if book in user.borrowedBook:
                    print("Already borrowed!!!")
                    return
                elif book.quantity==0:
                    print("No copy available!!")
                    return
            user.borrowedBook.append(book)
            book.quantity-=1
            return
        print('Not found any book with name {token}\n')
    
    def returnBook(self,user,token):
        
        for book in self.books:
            if book.id==token:
                if book in user.borrowedBooks:
                    book.quantity+=1
                    user.returnedBooks.append(book)
                    user.borrowedBooks.remove(book)
                    print(f"\n\t---> Returned {book.name} Succesfully !")
                    return
                else:
                    print(f"\n\t---> !!! You are not reading {book.name} now")
                    return
                
        print(f"\n\t---> !!! Not found any book with id: {token}")





janata=Library('janata')
admin=janata.addUser(100,'admin','admin')
shawmitra=janata.addUser(33,'shawmitra','123')
cpbook=janata.addBook(1,'cpbook',3)

currentUser=admin
while True:
    if currentUser==None:
        print('No logged is user\n')

        option=input('Log in or Register (L/R) : ')
        if option=='L':
            id=int(input('Enter Id : '))
            password=input('Enter password : ')
            match=False
            for user in janata.users:
                if user.id==id and user.password==password:
                     currentUser=user
                     match=True
                     break
            if match==False:
                print("No User found!!")
        elif option=='R':
            id=int(input('Enter Id : '))
            name=input("Enter Your Name : ")
            password=input('Enter password : ')

            for user in janata.users:
                if user.id==id:
                    print("You have already registered!!")
        user=janata.addUser(id,name,password)
        currentUser=user
    
    else:
        print(f"Welcome Back {currentUser.name}!\n")
        if currentUser.name=='admin':
            print('option : \n')
            print('1 : Add Book')
            print('2: Add User: ')
            print('3 : Show All Book')
            print('4: Logout: ')

            ch=int(input('Enter Your choice: '))
            if ch==1:
                id=int(input('Enter book id : '))
                name=input('Enter Book Name: ')
                quantity=input('Enter the number of Book : ')
                janata.addBook(id,name,quantity)
            elif ch==3:
                for book in janata.books:
                    print(f'{book.id} \t {book.name}\t {book.quantity}')
                print('\n')
            elif ch==4:
                currentUser=None
        
        else:
            print('option : \n')
            print('1: Borrowed Book: ')
            print('2: Return Book :')
            print('3 : Show All Borowed Book')
            print('4 : Show All History')
            print('5: Logout: ')

            ch=int(input('Enter Your choice: '))
            if ch==1:
                id=int(input('Enter the book id: '))
                janata.borrowBook(currentUser,id)
            elif ch==2:
                 id=input('Enter the book id: ')
                 janata.returnBook(currentUser,id)
            elif ch==3:
                 print("\n\tAll Books:\n")
                 for book in janata.books:
                    if book in currentUser.borrowedBooks:
                        print(f'\t{book.id}\t{book.name}\t{book.quantity}\tReading Now..')
                    elif book in currentUser.returnedBooks:
                        print(f'\t{book.id}\t{book.name}\t{book.quantity}\tAlready Read')
                    else:
                        print(f'\t{book.id}\t{book.name}\t{book.quantity}\tDid not Read')
            elif ch==4:
                 print("\n\tBorrowed Books:\n")
                 for book in currentUser.borrowedBooks:
                     print(f'\t{book.id}\t{book.name}\t{book.quantity}')
            
            elif ch==5:
                print("\n\tHistory:\n")
                for book in currentUser.returnedBooks:
                     print(f'\t{book.id}\t{book.name}\t{book.quantity}')
            elif ch==6:
                currentUser=None
            
            else:
                print("\n\t---> !!! Choose Valid Option\n")


















            


                    

