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
void insert_tail(Node *&head,int v){
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
//   cout<<tmp->val<<endl;
}
void insert_head(Node *&head,int v){
  Node *newNode=new Node(v);
  newNode->next=head;
  head=newNode;
//   cout<<head->val<<" ";
}
// void print_linked_list(Node *head)
// {
//     Node *tmp = head;
//     while (tmp != NULL)
//     {
//         cout << tmp->val << " ";
//         tmp = tmp->next;
//     }
   
// }
int main()
{
fast;
Node *head=NULL;
Node *tail=NULL;
int n;
cin>>n;
int i=1;
while(i<=n){
    int q,x;
    cin>>q>>x;
    if(q==0){
     insert_head(head,x);
    //    insert_tail(head,x);
     
   }
  else if(q==1){
      insert_tail(head,x);
    //   insert_head(head,x); 
    }
    //  insert_tail(head,x);
    //    insert_head(head,x); 
    // print_linked_list(head);
     i++;
     cout<<head->val<<" ";
     cout<<tail->val<<" ";
    cout<<endl;
}

get_out;
}