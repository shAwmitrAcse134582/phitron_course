#include<bits/stdc++.h>
#define ll  long long int
#define pb  push_back
#define get_out return 0
#define fast ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;
class Node{
    public:
    int val;
    Node *left;
    Node *right;
    Node(int val){
        this->val=val;
        this->left=NULL;
        this->right=NULL;
    }
};
void level_order(Node *root){
    queue<Node*>q;
    q.push(root);
    while(!q.empty()){
        //1> Ber kore anci
        Node *f=q.front();
        q.pop();
        //2> jabotiyo kaj gulo korrci
        cout<<f->val<<" ";

        //3>children gulo k rakci
        if(f->left!=NULL){
             q.push(f->left);
        }
        if(f->right){
            q.push(f->right);
        }
    }
}
int main()
{
fast;
//assign value to the Node
Node *root=new Node(10);
Node *a=new Node(20);
Node *b=new Node(30);
Node *c=new Node(40);
Node *d=new Node(50);
Node *e=new Node(60);
Node *f=new Node(70);
Node *g=new Node(80);
Node *h=new Node(90);
Node *i=new Node(100);

//create connection
root->left=a;
root->right=b;
a->left=c;
a->right=h;
c->right=e;
h->right=i;
b->right=d;
d->left=f;
d->right=g;

level_order(root);


get_out;
}