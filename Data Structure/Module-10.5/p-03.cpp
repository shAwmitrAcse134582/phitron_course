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
void insert_Node(Node *&head,Node *&tail,int v){
    Node *newNode=new Node(v);
    while(tail==NULL){
        head=newNode;
        tail=newNode;
        return;
    }
    tail->next=newNode;
    newNode->prev=tail;
    tail=newNode;

}
void check_palindrome(Node *head,Node *tail){
    Node *i=head;
    Node *j=tail;
    bool ok=true;
    while(i!=j && i->next!=j){
         if(i->val!=j->val){
           ok=false;
           break;
         }
         i=i->next;
         j=j->prev;
    }
    if(i->val!=j->val){
        ok=false;
    }
    if(ok){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }

}
int main()
{
fast;
Node *head=NULL;
Node *tail=NULL;
 while(true){
    int v;
    cin>>v;
    if(v==-1){
        break;
    }
    else{
        insert_Node(head,tail,v);
    }
 }
 check_palindrome(head,tail);

get_out;
}