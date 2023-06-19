#include<bits/stdc++.h>
#define ll  long long int
#define pb  push_back
#define get_out return 0
#define fast ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;
class Node{
    public:
   int data;
   Node *next;
   Node(int data){
    this->data=data;
    this->next=NULL;
   }
};
int main()
{
fast;
Node *head=new Node(10);
Node *a=new Node(20);
Node *b=new Node(30);
Node *c=new Node(40);

head->next=a;
a->next=b;
b->next=c;
c->next=a;

Node *slow=head;
Node *fst=head;
bool ok=false;
while(fst!=NULL && fst->next!=NULL){
    slow=slow->next;
    fst=fst->next->next;
    if(fst==slow){
        ok=true;
        // cout<<"cycle Detected"<<endl;
        break;

    }
}
if(ok){
    cout<<"cycle detected"<<endl;
}
else{
    cout<<"cycle is not found"<<endl;
}

get_out;
}