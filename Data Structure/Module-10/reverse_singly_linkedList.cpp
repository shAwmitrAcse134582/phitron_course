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
   Node(int data){
    this->data=data;
    this->next=NULL;
   }


};
void print_linkedlist(Node *head){
    Node *tmp=head;
    while(tmp!=NULL){
        cout<<tmp->data<<" ";
        tmp=tmp->next;
    }

}
void reverse_print(Node *&head,Node *cur){
   if(cur->next==NULL){
    head=cur;
    return;
   }
   reverse_print(head,cur->next);
   cur->next->next=cur;
   cur->next=NULL;
}
int main()
{
fast;
Node *head=new Node(10);
Node *a=new Node(20);
Node *b=new Node(30);
Node *c=new Node(40);

head->next=a;
a->next=b;
b->next=c;
c->next=NULL;

reverse_print(head,head);
print_linkedlist(head);

get_out;
}