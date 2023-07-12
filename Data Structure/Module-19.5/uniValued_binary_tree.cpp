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
// bool check(TreeNode* root){
//    int x=root->val;
//    bool ok=true;
//   if(root==NULL){
//       ok=true;
//   }
     
//   check(root->left);
//   check(root->right);
//     if(root->val!=x){
//      return false;
//   }
//   if(ok)
//   return true;
  
  
// }
    bool isUnivalTree(TreeNode* root) {
        
        if(root==NULL){
            return true;
        }
        if(root->left && root->left->val!=root->val || root->right && root->right->val!=root->val){
            return false;

        }
        bool l=isUnivalTree(root->left);
        bool r=isUnivalTree(root->right);
        if(!l || !r){
            return false;
        }
        else{
            return true;
        }
    }
};