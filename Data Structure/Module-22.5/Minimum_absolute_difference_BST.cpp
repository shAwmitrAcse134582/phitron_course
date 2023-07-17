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
vector<int>v;
void preorder(TreeNode * root){
    if(root){
        v.push_back(root->val);
        preorder(root->left);
        preorder(root->right);
    }
}
    int getMinimumDifference(TreeNode* root) {
        preorder(root);
        sort(v.begin(),v.end());
        int dif=0;
    int ans=INT_MAX;
    
        
          for(int i=1;i<v.size();i++){
             dif=(v[i]-v[i-1]);
             ans=min(ans,dif);
          }
          return ans;
    }
};