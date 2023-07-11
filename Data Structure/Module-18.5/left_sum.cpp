#include <bits/stdc++.h> 
using namespace std;
/*
template <typename T>
class BinaryTreeNode 
{
    public:
        T data;
        BinaryTreeNode<T> *left;
        BinaryTreeNode<T> *right;

        BinaryTreeNode(T data) {
            this->data = data;
            left = NULL;
            right = NULL;
        }
};
*/

long long leftSum(BinaryTreeNode<int> *root)
{
	if(root==NULL){
         return 0;
    }
    
    long long sum=leftSum(root->left) + leftSum(root->right);
      if(root->left){
          sum+=root->left->data;
      }
   return sum;
}