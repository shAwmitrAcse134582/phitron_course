/**********************************************************
	Following is the Binary Tree Node class structure

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
// vector<int>v;

// void pre_order(BinaryTreeNode* root){
// 	if(root==NULL){
// 		return;
// 	}
// 	return(root->data);
// 	pre_order(root->left);
// 	pre_order(root->right);
// }

void preOrder(BinaryTreeNode<int> *root) {
	if(root==NULL){
		return;
	}
	cout<<root->data<<" ";
	preOrder(root->left);
	preOrder(root->right);
}