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
int count(Node *root){
    if(root==NULL)return 0;
    int l=count(root->left);
    int r=count(root->right);

    return l+r+1;
}
int count_maxheight(Node *root){
   if(root==NULL){
    return 0;
   }
   int l=count_maxheight(root->left);
   int r=count_maxheight(root->right);
   return max(l,r)+1;
   
}
int main()
{
fast;
Node *root=input_tree();
int cnt=count(root);
int mxheight=count_maxheight(root);
 int x=pow(2,mxheight)-1;
 if(cnt==x){
    cout<<"YES"<<endl;
 }
 else{
    cout<<"NO"<<endl;
 }


get_out;
}