#include<bits/stdc++.h>
#define ll  long long int
#define pb  push_back
#define get_out return 0
#define fast ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;
class Node{
    public:
    ll val;
    Node *next;
    Node(ll val){
        this->val=val;
        this->next=NULL;
    }
};
void insert_at_tail(Node *&head,int v){
  Node *newNode=new Node(v);
  newNode->next=head;
  head=newNode;
//   if(head==NULL){
//     head=newNode;
//     return;
//   }
//   Node *tmp=head;
//   while(tmp->next!=NULL){
//     tmp=tmp->next;
//   }
//   tmp->next=newNode;
}
void  print_linked_list(Node *head)
{
    Node *tmp = head;
    while (tmp != NULL)
    {
        cout << tmp->val << " ";
        tmp = tmp->next;
    }
   
}
void reverse_print(Node *head){
    if(head==NULL){
        return;
    }
    reverse_print(head->next);
    cout<<head->val<<" ";

}
int main()
{
fast;
Node *head=NULL;
ll x;
while(true){
    cin>>x;
    if(x==-1){
        break;
    }
    else{
        insert_at_tail(head,x);
    }
   
}
print_linked_list(head);
cout<<endl;
reverse_print(head);



get_out;
}