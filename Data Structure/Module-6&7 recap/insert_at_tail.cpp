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
void insert_at_tail(Node *&head,int v){
  Node *newNode=new Node(v);
  if(head==NULL){
    head=newNode;
    return;
  }
  Node *tmp=head;
  while(tmp->next!=NULL){
    tmp=tmp->next;
  }
  tmp->next=newNode;
}
void print_linked_list(Node *head){
    cout<<"Your Linked List"<<endl;
    Node *tmp=head;
    while(tmp->val!=NULL){
        cout<<tmp->val<<" ";
        tmp=tmp->next;
    }
    cout<<endl;
}
int main()
{
fast;
Node *head=NULL;
while(true){
    cout<<"option-1:Insert at tail"<<endl;
    cout<<"option-2:print linked list"<<endl;
    cout<<"option-3:teminate"<<endl;
int op;
cin>>op;
if(op==1){
  cout<<"Please Enter Value"<<endl;  
int v;
cin>>v;
insert_at_tail(head,v);
}
else if(op==2){
print_linked_list(head);
}
else if(op==3){
    break;
}

}

get_out;
}