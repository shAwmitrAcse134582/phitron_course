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
 class mystack{
       public:
       Node *head=NULL;
       Node *tail=NULL;
       int sz=0;
       void push(int val){
                 sz++;
            Node *newNode=new Node(val);
            if(head==NULL){
                head=newNode;
                tail=newNode;
                return;
            }
            tail->next=newNode;
            newNode->prev=tail;
            tail=newNode;
       }
       void pop(){
        sz--;
        Node *deleteNode=tail;
        tail=tail->prev;
        if(tail==NULL){
            head=NULL;
           
        }
        else{
            tail->next=NULL;
        }
        delete deleteNode;
       }
       int top(){
        return tail->val;
       }
       int size(){
        return sz;
       }
       bool empty(){
        if(sz==0){
            return true;

        }
        else {
            return false;
        }
       }
 };
 class myQ{
    public:

    Node *head=NULL;
    Node *tail=NULL;
    int sz=0;
    void push(int val){
        sz++;
        Node *newNode=new Node(val);
        if(head==NULL){
            head=newNode;
            tail=newNode;
            return;
        }
        tail->next=newNode;
        newNode->prev=tail;
        tail=newNode;
    }
    void pop(){
        sz--;
        Node *deleteNode=head;
        head=head->next;
        if(head==NULL){
            tail=NULL;
            delete deleteNode;
            return;   
        }
        head->prev=NULL;
        delete deleteNode;

    }
    int size(){
         return sz;
    }
    int front(){
        return head->val;
    }
    bool empty(){
        if(sz==0)return true;
        else return false;
    }
 };
int main()
{
fast;
mystack st;
myQ q;
int n,m;
cin>>n>>m;
for(int i=0;i<n;i++){
    int x;
    cin>>x;
    st.push(x);
}
for(int j=0;j<m;j++){
    int y;
    cin>>y;
    q.push(y);
}
if(st.size()!=q.size()){
    cout<<"NO"<<endl;
}
else{
    bool ok=false;
    while(!st.empty()){
        if(st.top()!=q.front()){
            ok=true;
            break;
        }
        st.pop();
        q.pop();
    }
    if(ok){
        cout<<"NO"<<endl;
    }
    else{
        cout<<"YES"<<endl;
    }
}

get_out;
}