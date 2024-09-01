/*
Problem statement
You are given a Binary tree. You have to count and return the number of leaf nodes present in it.
A binary tree is a tree data structure in which each node has at most two children, which are referred to as the left child and the right child
A node is a leaf node if both left and right child nodes of it are NULL.
*/
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
/*
template <typename T>
int noOfLeafNodes(BinaryTreeNode<T> *root){
    if(root == NULL)
        return 0;
    if(root->left == NULL && root->right == NULL){
        return 1;
    }else{
        int l = noOfLeafNodes(root->left);
        int r = noOfLeafNodes(root->right);
        return l+r;
    }
}
*/