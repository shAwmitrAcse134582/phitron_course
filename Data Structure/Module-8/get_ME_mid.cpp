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
void insert_at_tail(Node *&head, Node *&tail, int val)
{
    Node *newNode = new Node(val);
    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }
    tail->next = newNode;
    tail = newNode;
}

void midvalue(Node *head,int c){
   Node *tmp=head;
   int md=(c+1)/2;
   for(int i=1;i<md;i++){
    tmp=tmp->next;
   }
   if(c%2==0){
    cout<<tmp->val<<" "<<tmp->next->val;
   }
   else{
    cout<<tmp->val<<endl;
   }
}
int main()
{
fast;
Node *head=NULL;
Node *tail=NULL;
int x;
int c=0;
while(true){
    cin>>x;
    if(x==-1){
        break;
    }
    else{
        c++;
        insert_at_tail(head,tail,x);
    } 
}
for (Node *i=head;i->next!=NULL;i=i->next)
    {
        for (Node *j=i->next; j!=NULL; j=j->next)
        {
            if (i->val<j->val)
            {
                swap(i->val,j->val);
            }
        }
    }
    midvalue(head,c);



get_out;
}