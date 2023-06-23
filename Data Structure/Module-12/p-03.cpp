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
void insert_Node(Node *&head,Node*&tail,int val){
    Node *newNode=new Node(val);
    if(head==NULL){
    head=newNode;
    tail=newNode;
    return;
    }
    tail->next=newNode;
    tail=newNode;
}
void insert_reverseNode(Node *&head2,Node*&tail2,int val){
    Node *newNode=new Node(val);
    if(head2==NULL){
    head2=newNode;
    tail2=newNode;
    return;
    }
    tail2->next=newNode;
    tail2=newNode;
}
void print_list(Node *&head){
     Node *tmp=head;
     while(tmp!=NULL){
        cout<<tmp->val<<" ";
        tmp=tmp->next;
     }
}
void reverse(Node* &head,Node *cur){
    if(cur->next==NULL){
        head=cur;
        return;
    }
   
    reverse(head,cur->next);
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
        insert_Node(head,tail,v);
    }
}
Node *tmp=head;

Node *head2=NULL;
Node *tail2=NULL;
while(tmp!=NULL){
    // cout<<tmp->val<<" ";
   
    insert_reverseNode(head2,tail2,tmp->val);
    //  cout<<head2->val<<" ";
    tmp=tmp->next;
}
// print_list(head);
reverse(head2,head2);
tmp=head;
// cout<<endl;
// print_list(head2);

bool ok=false;
Node *tmp2=head2;
while(tmp!=NULL){
    if(tmp->val!=tmp2->val){
           ok=true;
           break;
    }
    tmp=tmp->next;
    tmp2=tmp2->next;
}
if(ok){
    cout<<"NO"<<endl;
}
else{
    cout<<"YES"<<endl;
}


get_out;

}