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

int main()
{
fast;
Node *head=NULL;
Node* head2=NULL;
int x;
int c1=0;
while(true){
    cin>>x;
    if(x==-1){
        break;
    }
    else{
        c1++;
        insert_at_tail(head,x);
    }
   
}
int y;
int c2=0;
while(true){
    cin>>y;
    if(y==-1){
        break;
    }
    else{
        c2++;
        insert_at_tail(head2,y);
    }
   
}
//  print_linked_list(head);
if(c1!=c2){
    cout<<"NO"<<endl;
    return 0;
}
 bool ok=false;
 while(head!=NULL){
if((head->val!=head2->val)||(head2==NULL && head!=NULL)||(head==NULL&&head2!=NULL)){
ok=true;
break;
}
head=head->next;
if(head2!=NULL){
head2=head2->next;
}

 }


 if(ok){
    cout<<"NO"<<endl;
 }
 else{
    cout<<"YES"<<endl;
 }

get_out;
}