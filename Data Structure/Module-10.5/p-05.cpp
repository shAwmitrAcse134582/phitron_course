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
void insert_Node(Node *&head,Node *&tail,int v){
    Node *newNode=new Node(v);
    while(tail==NULL){
        head=newNode;
        tail=newNode;
        return;
    }
    tail->next=newNode;
    newNode->prev=tail;
    tail=newNode;
}
void print_Node(Node *&head){
    Node *tmp=head;
    while(tmp!=NULL){
       cout<<tmp->val<<" ";
       tmp=tmp->next;
    }
    cout<<endl;
}
void sort_Node(Node *&head){
    Node *tmp=head;
    for(Node *i=tmp;i->next!=NULL;i=i->next){
        for(Node *j=i->next;j!=NULL;j=j->next){
            if(i->val<j->val){
                swap(i->val,j->val);
            }
        }
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
         insert_Node(head,tail,v);
    }
}
sort_Node(head);
print_Node(head);

get_out;
}