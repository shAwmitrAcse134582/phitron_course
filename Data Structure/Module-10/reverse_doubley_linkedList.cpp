#include<bits/stdc++.h>
#define ll  long long int
#define pb  push_back
#define get_out return 0
#define fast ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;
class Node{
    public:
    int val;
    Node *next;
    Node *prev;
    Node(int val){
       this->val=val;
       this->next=NULL;
       this->prev=NULL;
    }
};
void print_forward(Node *head){
    Node *tmp=head;
    while(tmp!=NULL){
        cout<<tmp->val<<" ";
        tmp=tmp->next;
    }
    cout<<endl;
}
void print_back(Node *tail){
    Node *tmp=tail;
    while(tmp!=NULL){
        cout<<tmp->val<<" ";
        tmp=tmp->prev;
    }
    cout<<endl;
}
void reverse(Node *head,Node *tail){
    Node *i=head;
    Node *j=tail;
    while(i!=j&& i->next!=j){
        swap(i->val,j->val);
        i=i->next;
        j=j->prev;
    }
    swap(i->val,j->val);
}
int main()
{
fast;
Node *head=new Node(10);
Node *a=new Node(20);
Node *b=new Node(30);
Node *c=new Node(40);
// Node *d=new Node(50);
// Node *e=new Node(60);
Node *tail=c;

head->next=a;
a->prev=head;
a->next=b;
b->prev=a;
b->next=c;
c->prev=b;
// c->next=d;
// d->prev=c;
// d->next=e;
// e->prev=d;



// print_back(tail);

reverse(head,tail);
print_forward(head);



get_out;
}