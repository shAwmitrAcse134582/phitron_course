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
Node *input_tree(){
    int val;
    cin>>val;
    Node *root;
    if(val==-1){
        root=NULL;
    }
    else{
        root=new Node(val);
    }
    queue<Node*>q;
    if(root){
           q.push(root);
    }
    while(!q.empty()){
        Node *p=q.front();
        q.pop();
        int l,r;
        cin>>l>>r;
        Node *left;
        Node *right;
        if(l==-1){
            left=NULL;
        }
        else{
            left=new Node(l);
        }
        if(r==-1){
            right=NULL;
        }
        else{
            right=new Node(r);
        }
        p->left=left;
        p->right=right;

        if(p->left){
            q.push(p->left);
        }
        if(p->right){

            q.push(p->right);
        }
    }
    return root;
}
// void print_order(Node *root){
//     queue<Node*>q;
//     q.push(root);
//     while(!q.empty()){
//         Node *f=q.front();
//         q.pop();
//         cout<<f->val<<" ";
//          if(f->left){
//             q.push(f->left);
//         }
//         if(f->right){
//             q.push(f->right);
//         }
       
//     }
// }
bool search_node(Node*root,int x){
    if(root==NULL)return false;
    if(root->val==x)return true;
    if(x < root->val){
        return search_node(root->left,x);
    }
    else{
        return search_node(root->right,x);
    }
}
int main()
{
fast;
Node *root=input_tree();
// print_order(root);
int x;
cin>>x;

 bool ok = search_node(root,x);
 if(ok){
  cout<<"found"<<endl;
 }
 else{
    cout<<"Not found"<<endl;
 }

get_out;
}