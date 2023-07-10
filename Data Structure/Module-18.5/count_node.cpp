/**********************************************************

    Following is the Binary Tree Node class structure:

    template <typename T>
    class BinaryTreeNode {
      public :
        T data;
        BinaryTreeNode<T> *left;
        BinaryTreeNode<T> *right;

        BinaryTreeNode(T data) {
                this -> data = data;
                left = NULL;
                right = NULL;
        }
    };
    
***********************************************************/
  int count_Node(BinaryTreeNode<int> *root){
      if(root==NULL)return 0;
      if(root->left==NULL && root->right==NULL){
          return 1;
      }
    int l = count_Node(root->left);
    int r= count_Node(root->right);
    return l+r;
  }
int noOfLeafNodes(BinaryTreeNode<int> *root){
    int x=count_Node(root);
    return x;
}