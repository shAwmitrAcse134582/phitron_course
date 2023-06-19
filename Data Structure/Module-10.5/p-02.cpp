#include<bits/stdc++.h>
#define ll  long long int
#define pb  push_back
#define get_out return 0
#define fast ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;
class Node{
    public:
    int data;
    Node *next;
    Node *prev;
    Node(int data){
        this->data=data;
        this->next=NULL;
        this->prev=NULL;
    }
};
void insert_data(Node *&head,Node*&tail,int v){
    Node *newNode=new Node(v);
    if(tail==NULL){
        head=newNode;
        tail=newNode;
        return;
    }
    tail->next=newNode;
    newNode->prev=tail;
    tail=newNode;

}
void reverse_print(Node *head,Node *tail){
    Node *i=head;
    Node *j=tail;
    while(i!=j && i->next!=j){
        swap(i->data,j->data);
        i=i->next;
        j=j->prev;
    }
    swap(i->data,j->data);
}
void print_list(Node *head){
    Node *tmp=head;
    while(tmp!=NULL){
        cout<<tmp->data<<" ";
        tmp=tmp->next;
    }
}
int main()
{
fast;
Node *head=NULL;
Node *tail=NULL;
while(true){
    int v;
    cin>>v;
    if(v==-1){
        break;
    }
    else{
        insert_data(head,tail,v);
    }
}
reverse_print(head,tail);
print_list(head);

get_out;
}