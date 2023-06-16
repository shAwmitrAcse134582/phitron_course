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
void print_linked_list(Node *head)
{
    Node *tmp = head;
    int mn=INT_MAX;
   int mx=INT_MIN;
    while (tmp != NULL)
    {
       
        mn=min(tmp->val,mn);
        mx=max(tmp->val,mx);
         tmp = tmp->next;
    }
  
cout<<mx<<" "<<mn<<endl;
   
}
int main()
{
fast;
Node *head=NULL;
int x;
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

get_out;
}