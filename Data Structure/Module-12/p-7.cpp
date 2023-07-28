#include<bits/stdc++.h>
using namespace std;
class node
{
    public:
    string address;
    node* next;
    node* prev;
    node(string address)
    {
        this->address = address;
        this->next = NULL;
        this->prev = NULL;
    }
};

void insert_at_tail(node*& head, node*& tail, string address)
{
    node* newNode = new node(address);
    if(tail == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }
    tail->next = newNode;
    newNode->prev = tail;
    tail = tail->next;
}

int main()
{
    node* head = NULL;
    node* tail = NULL;
    string ad;
    while(true)
    {
        cin>>ad;
        if(ad == "end") break;
        else{
                insert_at_tail(head, tail, ad);
        }
       
    }
    int q;
    cin>>q;
    while(q--)
    {
        string command;
        cin>>command;
        node* visited;   
        if(command == "visit")
        {
            string site;
            cin>>site;
            node* temp = head;
            int flag = 1;
            while(temp != NULL)
            {
                if(site == temp->address)
                {
                    cout<<temp->address<<endl;
                    visited = temp;
                }
                else if(site != temp->address)
                {
                    flag = 0;
                }
                temp = temp->next;
            }
            if(flag == 0) cout<<"Not Available"<<endl;
        }

        else if(command == "prev")
        {
            if(visited->prev == NULL)
            {
                cout<<"Not Available"<<endl;
            }
            else
            {
                // visited = visited->prev;
                cout<<visited->address<<endl;
                visited = visited->prev;
            }     
        }

        else if(command == "next")
        {
            if(visited->next == NULL)
            {
                cout<<"Not Available"<<endl;
            }
            else
            {
                // visited = visited->next;
                cout<<visited->address<<endl;
                visited = visited->next;
            }     
        }
    }
    return 0;
}