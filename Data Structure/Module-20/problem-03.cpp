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
void level_order(Node *root){

    if(root==NULL){
        return;
    }
    queue<pair<Node*,int>>q;
    vector<pair<int,int>>v;
   
    q.push({root,1});
    while(!q.empty()){

        pair<Node*,int>p=q.front();
        q.pop();
        Node *n=p.first; 
        int level=p.second;
        // cout<<"val"<<" "<<n->val<<" "<<"level"<<" "<<level<<endl;
        v.push_back({n->val,level});
        if(n->left){
            q.push({n->left,level+1});
        }
        if(n->right){
            q.push({n->right,level+1});
        }
        

    }
   for(int i=v.size()-1;i>=0;){
    int tmp=v[i].second;
    vector<int>vt;
    while(v[i].second==tmp && i>=0){
        vt.push_back(v[i].first);
        i--;
    }
    reverse(vt.begin(),vt.end());
    for(auto val:vt){
        cout<<val<<" ";
    }
   }
}
int main()
{
fast;
Node *root=input_tree();
level_order(root);


get_out;
}
