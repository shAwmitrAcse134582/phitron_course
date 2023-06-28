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
void insert_tail(Node* &head,Node* &tail,int val){
    Node *newNode=new Node(val);
    if(head==NULL){
        head=newNode;
        tail=newNode;
        return;
    }
    tail->next=newNode;
    tail=newNode;

}    
void insert_head(Node *&head,int val){
    Node *newNode=new Node(val);
    if(head==NULL){
        head=newNode;
        return;
    }
    newNode->next=head;
    head=newNode;
}
void insert_position(Node *&head,int pos,int val){
    Node *newNode=new Node(val);
    Node *tmp=head;
    for(int i=1;i<pos-1;i++){
        tmp=tmp->next;
    }
    newNode->next=tmp->next;
    tmp->next=newNode;
}
int size(Node* &head){
    int cnt=0;
    Node *tmp=head;
    while(tmp!=NULL){
        cnt++;
        tmp=tmp->next;
    }
    return cnt;
}
void print_Node(Node* &head){
    Node *tmp=head;
    while(tmp!=NULL){
        cout<<tmp->val<<" ";
        tmp=tmp->next;
    }
    cout<<endl;
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
int q;
cin>>q;
while(q--){
    int pos,val;
    cin>>pos>>val;
    if(pos==0){
        insert_head(head,val);
        print_Node(head);
    }
    else if(pos==size(head)){
        insert_tail(head,tail,val);
        print_Node(head);
    }
    else if(pos>size(head)){
        cout<<"Invalid"<<endl;
    }
    else{
        insert_position(head,pos,val);
        print_Node(head);
    }
}

get_out;
}