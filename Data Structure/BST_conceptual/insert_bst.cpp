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
void insert(Node* &root,int val){
    Node* parent=NULL;
    Node* cur=root;
    Node* newNode=new Node(val);
    if(root==NULL){
        root=newNode;
        return;
    }
    while(cur!=NULL){
        if(cur->val>newNode->val){
            parent=cur;
            cur=cur->left;
        }
        else{
            parent=cur;
            cur=cur->right;
        }
        
    }
       if(newNode->val<parent->val){
            parent->left=newNode;
        }
        else{
            parent->right=newNode;
        }  
}
void print(Node *root){
    queue<Node*>q;
    q.push(root);
    while(!q.empty()){
        Node *f=q.front();
        q.pop();
        cout<<f->val<<" ";
        if(f->left){
            q.push(f->left);
        }
        if(f->right){
             q.push(f->right);
        }
    }

}
bool recursive_search(Node *root,int s){
    if(root==NULL){
        return false;
    }
    if(root->val==s){
        return true;
    }
    if(root->val>s){
        return recursive_search(root->right,s);
    }
    else{
        return recursive_search(root->left,s);
    }
}
bool search_manually(Node *root,int s){
    Node *cur=root;
    while(cur!=NULL){
        if(cur->val>s){
            cur=cur->right;
        }
        else if(cur->val<s){
            cur=cur->left;
        }
        else{
            return true;
        }
    }
    return false;
}
int main()
{
fast;
Node *root=NULL;
insert(root,5);
insert(root,4);
insert(root,6);
insert(root,2);
insert(root,7);
print(root);
cout<<endl;
if(recursive_search(root,5)){
    cout<<"YES"<<endl;
}
else{
    cout<<"NO"<<endl;
}
cout<<endl;
if(search_manually(root,10)){
    cout<<"YES"<<endl;
}
else{
    cout<<"NO"<<endl;
}


get_out;
}