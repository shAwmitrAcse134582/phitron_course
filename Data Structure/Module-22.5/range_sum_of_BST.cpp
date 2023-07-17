/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
void preorder(TreeNode* root,int* sum,int l,int h){
    if(root==NULL){
        return;
    }
    if(root->val>=l && root->val<=h){
        *sum=*sum+root->val;
    }
    preorder(root->left,sum,l,h);
    preorder(root->right,sum,l,h);
    // return sum;
}
    int rangeSumBST(TreeNode* root, int low, int high) {
        int sum=0;
    preorder(root,&sum,low,high);

       return sum;
    }
};