class Star_cinema:
    hall_list=[]

    def entry_hall(self,hall):
        self.hall_list.append(hall)


class Hall:
    def __init__(self,rows,cols,hall_no) :
        self.rows=rows
        self.cols=cols
        self.hall_no=hall_no
        self.show_list=[]
        self.seats={}
    def entry_show(self,id,movieName,time):
        show=(id,movieName,time)
        self.show_list.append(show)
        seat_list=[]
        for i in range(self.rows):
            col=[]
            for j in range(self.cols):
                col.append(0)
            seat_list.append(col)
        self.seats[id]=seat_list


    
    def book_seats(self, id, seat_list):
        show = None
        for s in self.show_list:
            if s[0] == id:
             show = s
             break
        if show==None:
            print(f'sorry!!! {id} does not match')
        else:
            show_id=show[0]
            for seat in seat_list:
                if seat[0]>self.rows or seat[1]>self.cols:
                    print(f'sorry!!! {seat} is not available')
                else:
                    if self.seats[show_id][seat[0]][seat[1]]==0:
                        self.seats[show_id][seat[0]][seat[1]]=1
                        print(f'Congratulation!! You haved booked {seat} seat for show :{id}')
                    else:
                        print(f'sorry!! This  seat {seat} is already booked!please try to book another seat!!')
    
    def view_show_list(self):
        for show in self.show_list:
            print(f'show-id:{show[0]},movie-name:{show[1]} time:{show[2]}')

    def view_available_seats(self,id):
        show=None
        for s in self.show_list:
            if s[0] == id:
                show=s
                break
        if show==None:
            print(f'show id {id} does not match')
        else:
            show_id=show[0]
            for i in range(self.rows):
                for j in range(self.cols):
                    print(self.seats[show_id][i][j],end=" ")
                print()

cinema_hall=Hall(5,5,1)
cineplex=Star_cinema()
cineplex.entry_hall(cinema_hall)

cinema_hall.entry_show(1,"12th fail","12/01/2024 10:00AM")
cinema_hall.entry_show(2,"Animal","12/01/2024 2:00PM")
cinema_hall.entry_show(3,"Jawan","12/01/2024 8:00PM")


while True:
    print("option-1 : View All  show ")
    print("option-2 : View Available seats today")
    print("option-3 : Book ticket")
    print("option-4 : Exit")

    ch=int(input("Enter your choice : "))

    if ch==1:
        for show in cineplex.hall_list:
            show.view_show_list()
    elif ch==2:
        show_id=int(input('Enter show id : '))
        cinema_hall.view_available_seats(show_id)
    elif ch==3:
        show_id=int(input('Enter show id : '))
        tickets=int(input("Number of tickets you have need : "))
        ticket_list=[]

        for i in range(1,tickets+1):
            row=int(input('row number:  '))
            col=int(input('col number: '))
            ticket_list.append((row,col))
        cinema_hall.book_seats(show_id,ticket_list)
    elif ch==4:
        break
    else:
        print(f'{ch} is a invalid option')
        








                        



        


        
        



    



        

