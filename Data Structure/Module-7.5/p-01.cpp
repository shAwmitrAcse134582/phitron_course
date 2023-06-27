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
void print_Node(Node *&head,int val){
    Node *tmp=head;
    while(tmp!=NULL){
        cout<<tmp->val<<" ";
        tmp=tmp->next;
    }
}
int Node_size(Node *&head){
    Node *tmp=head;
    int cnt=0;
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
Node *head2=NULL;
Node *tail2=NULL;
int v2;
while(true){
    cin>>v2;
    if(v2==-1){
        break;
    }
    else{
        insert_tail(head2,tail2,v2);

    }
}
// print_Node(head,v);
// print_Node(head2,v2);
if(Node_size(head)==Node_size(head2)){
    cout<<"YES"<<endl;

}
else{
    cout<<"NO"<<endl;
}

get_out;
}