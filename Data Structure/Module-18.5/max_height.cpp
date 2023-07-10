#include <bits/stdc++.h> 
/************************************************************

    Following is the TreeNode class structure

    template <typename T>
    class TreeNode {
       public:
        T val;
        TreeNode<T> *left;
        TreeNode<T> *right;

        TreeNode(T val) {
            this->val = val;
            left = NULL;
            right = NULL;
        }
    };

************************************************************/
int max_height(TreeNode<int>*root){
    if(root==NULL){
        return -1;
    }
    else{
        int l=max_height(root->left);
         int r=max_height(root->right);
           return max(l,r)+1;
    }
}
int maxDepth(TreeNode<int> *root) {
    int h=max_height(root);
    return h;
}