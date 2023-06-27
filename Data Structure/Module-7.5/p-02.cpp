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
    Node(int val){
        this->val=val;
        this->next=NULL;
    }
};
void insert_tail(Node *&head,Node *&tail,int val){
    Node *newNode=new Node(val);
    if(head==NULL){
        head=newNode;
        tail=newNode;
        return;
    }
    tail->next=newNode;
    tail=newNode;
}
void print_Node(Node *&head,int val){
    Node *tmp=head;
    while(tmp!=NULL){
        cout<<tmp->val<<" ";
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
Node *head=NULL;
Node *tail=NULL;
int v;
while(true){
    cin>>v;
    if(v==-1){
        break;
    }
    else{
           insert_tail(head,tail,v);
    }
}
print_Node(head,v);
cout<<endl;
reverse_print(head,head);
print_Node(head,v);
get_out;
}