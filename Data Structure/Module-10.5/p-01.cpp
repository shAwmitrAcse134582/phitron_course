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
void print_data(Node *&head){
    Node *tmp=head;
    while(tmp!=NULL){
        cout<<tmp->val<<" ";
        tmp=tmp->next;
    }
    
}
void insert_data(Node *&head,Node *&tail, int val)
{
   Node *newNode=new Node(val);
   if(tail==NULL){
    tail=newNode;
    head=newNode;
    return;
   }
   tail->next=newNode;
   newNode->prev=tail;
   tail=newNode;
}
int main()
{
fast;
Node *head1=NULL;
Node *tail1=NULL;
int cnt1=0,cnt2=0;
while(true){
    int v1;
    cin>>v1;
    if(v1==-1){
        break;
    }
    else{
         cnt1++;
        insert_data(head1,tail1,v1);
    }
}
Node *head2=NULL;
Node *tail2=NULL;
while(true){
    int v2;
    cin>>v2;
    if(v2==-1){
        break;
    }
    else{
        cnt2++;
        insert_data(head2,tail2,v2);
    }
}
// print_data(head1);
// cout<<endl;
// print_data(head2);
bool ok=true;
Node *tmp1=head1;
Node *tmp2=head2;
if(cnt1!=cnt2){
    cout<<"NO"<<endl;
    return 0;
}
else{
     while(tmp1!=NULL){
        if(tmp1->val!=tmp2->val){
            ok=false;
            break;
        }
        tmp1=tmp1->next;
        tmp2=tmp2->next;

     }
}
if(ok){
    cout<<"YES"<<endl;
}
else{
    cout<<"NO"<<endl;
}

get_out;
}