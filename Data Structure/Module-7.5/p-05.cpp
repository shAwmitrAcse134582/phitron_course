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
void sorted_Node(Node *&head,int val){
    Node *i;
    Node  *j;
   
    for(i=head;i->next!=NULL;i=i->next){
        for(j=i;j!=NULL;j=j->next){
            if(i->val<j->val){
                swap(i->val,j->val);
            }
        }
    }
}
void print_Node(Node *&head,int val){
    Node *tmp=head;
    while(tmp!=NULL){
        cout<<tmp->val<<" ";
        tmp=tmp->next;
    }
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
sorted_Node(head,v);
print_Node(head,v);


get_out;
}