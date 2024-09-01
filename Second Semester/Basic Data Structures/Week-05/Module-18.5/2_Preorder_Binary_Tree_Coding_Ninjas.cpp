/*
Problem statement
You are given a ‘Binary Tree’.
Return the preorder traversal of the Binary Tree.
*/
/*
Code:-
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
template <typename T>
void pre_Order(TreeNode<T>* root, vector<T>& result){
    if(root == NULL)
        return;
    result.push_back(root->data);
    pre_Order(root->left,result);
    pre_Order(root->right,result);
}
template <typename T>
vector<T> preOrder(TreeNode<T> * root){
    vector<T>result;
    pre_Order(root,result);
    return result;
}

*/