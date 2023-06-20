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
void insert_position(Node *&head,int pos,int v){
    Node *newNode=new Node(v);
    Node *tmp=head;
    for(int i=0;i<pos-1;i++){
        tmp=tmp->next;
    }
    newNode->next=tmp->next;
    tmp->next=newNode;
    newNode->next->prev=newNode;
    newNode->prev=tmp;
}
void insert_tail(Node *&head,Node *&tail,int v){
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

void insert_head(Node *&head,Node *&tail,int v){
    Node *newNode=new Node(v);
    if(head==NULL){
        head=newNode;
        tail=newNode;
        return;
    }
    newNode->next=head;
    head->prev=newNode;
    head=newNode;
}

void print_forward(Node *&head){
    Node *tmp=head;
    while(tmp!=NULL){
        cout<<tmp->val<<" ";
        tmp=tmp->next;
    }
    
}
void print_back(Node *&tail){
Node *tmp=tail;
while(tmp!=NULL){
    cout<<tmp->val<<" ";
    tmp=tmp->prev;
}
}
int node_size(Node *&head)
{
    int cnt=0;
    Node *tmp=head;
    while(tmp!=NULL){
        cnt++;
        tmp=tmp->next;
    }
    return cnt;
}
int main()
{
fast;
Node *head=NULL;
Node *tail=NULL;

 int q;
cin>>q;
while(q--){
    bool ok=true;
    int pos,val;
    cin>>pos>>val;
    if(pos==0){
        insert_head(head,tail,val);
    }
    else if(pos==node_size(head)){
        insert_tail(head,tail,val);
    }
    else if(pos>node_size(head)){
        ok=false;
        // cout<<"Invalid"<<endl;    
    }
    else{
        insert_position(head,pos,val);
    }
   
    
    if(ok){
         print_forward(head);
         cout<<endl;
         print_back(tail);
         cout<<endl;
    }
    else{
        cout<<"Invalid"<<endl;
    }
    
}

get_out;
}