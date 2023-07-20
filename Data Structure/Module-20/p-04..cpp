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
void level_order(Node *root,int lv){
   bool ok=false;
    if(root==NULL){
        return;
    }
    queue<pair<Node*,int>>q;
   
    q.push({root,0});
    while(!q.empty()){

        pair<Node*,int>p=q.front();
        q.pop();
        Node *n=p.first; 
        int level=p.second;
        if(lv==level){
            cout<<n->val<<" ";
            ok=true;
        }

        if(n->left){
            q.push({n->left,level+1});
        }
        if(n->right){
            q.push({n->right,level+1});
        }
        

    }
    if(!ok){
        cout<<"Invalid"<<endl;
    }

}
int main()
{
fast;
Node *root=input_tree();
int level;
cin>>level;
level_order(root,level);


get_out;
}
