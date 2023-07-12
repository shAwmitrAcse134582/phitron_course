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
    void checkleaf(TreeNode* root, vector<int>&v){
        if(!root) return;
        if(!root->left && !root->right){
            v.push_back(root->val);
        }
        checkleaf(root->left,v);
        checkleaf(root->right,v);
    

    }
    bool leafSimilar(TreeNode* root1, TreeNode* root2) {
        vector<int>v,v2;
        checkleaf(root1,v);
        checkleaf(root2,v2);
        if(v==v2)
        return true;
        else return false;
    }
};