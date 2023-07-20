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
Node* input_tree(){
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
 
void preorder(Node *root,ll *sum){
    if(root==NULL){
        return;
    }
    *sum=*sum+root->val;
    preorder(root->left,sum);
    preorder(root->right,sum);
}
int main()
{
fast;
Node *root=input_tree();
ll sum=0;
preorder(root,&sum);
cout<<sum<<endl;


get_out;
}