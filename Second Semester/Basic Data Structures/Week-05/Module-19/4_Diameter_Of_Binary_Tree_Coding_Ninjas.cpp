/*
Problem statement
You are given a Binary Tree.
Return the length of the diameter of the tree.
Note :
The diameter of a binary tree is the length of the longest path between any two end nodes in a tree.
The number of edges between two nodes represents the length of the path between them.
*/
/************************************************************

    Following is the TreeNode class structure

    template <typename T>
    class TreeNode {
       public:
        T data;
        TreeNode<T> *left;
        TreeNode<T> *right;

        TreeNode(T data) {
            this->data = data;
            left = NULL;
            right = NULL;
        }
    };

************************************************************/
/*
int mx = 0;
template <typename T>
int maxHeight(TreeNode<T>* root){
    if(root == NULL)
        return 0;
    int l = maxHeight(root->left);
    int r = maxHeight(root->right);
    int d = l+r;
    mx = std::max(mx,d);
    return std::max(l,r)+1;
}
template <typename T>
int diameterOfBinaryTree(TreeNode<T>* root){
	mx = 0;
    int h = maxHeight(root);
    return mx;
}
*/