/*
Problem statement
You have been given a Binary Tree of integers. You are supposed to return the reverse of the level order traversal.
*/
/************************************************************

    Following is the TreeNode class structure:

    template <typename T>

    class TreeNode {
    public:
        T val;
        TreeNode<T> *left;
        TreeNode<T> *right;
        TreeNode(T val) {
            this->val = val;
            left = NULL;
            right = NULL;
        }
    };

************************************************************/
/*
#include <algorithm> 
vector<int> reverseLevelOrder(TreeNode<int> *root){
    vector<int>v;
    if(root == NULL) return v;
    queue<TreeNode<int>*>q;
    q.push(root);
    while(!q.empty()){
        TreeNode<int> *f = q.front();
        q.pop();

        v.push_back(f->val);

        if(f->left) q.push(f->left);
        if(f->right) q.push(f->right);
    }
    reverse(v.begin(), v.end());
    return v;
}
*/
