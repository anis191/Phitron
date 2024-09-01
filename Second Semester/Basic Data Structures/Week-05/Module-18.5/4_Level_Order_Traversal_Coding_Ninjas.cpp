/*
Problem statement
You have been given a Binary Tree of integers. You are supposed to return the level order traversal of the given tree.
*/
//#include <bits/stdc++.h> 
/************************************************************

    Following is the BinaryTreeNode class structure

    template <typename T>
    class BinaryTreeNode {
       public:
        T val;
        BinaryTreeNode<T> *left;
        BinaryTreeNode<T> *right;

        BinaryTreeNode(T val) {
            this->val = val;
            left = NULL;
            right = NULL;
        }
    };

************************************************************/
/*
template <typename T>
void LevelOrder(BinaryTreeNode<T> *root, vector<T>& result){
     if (root == NULL) return;
    queue<BinaryTreeNode<T> *>q;
    q.push(root);
    while(! q.empty()){
        BinaryTreeNode<T> *f = q.front();
        q.pop();

        result.push_back(f->val);

        if(f->left != NULL)
            q.push(f->left);
        if(f->right != NULL)
            q.push(f->right);
    }
}
template <typename T>
vector<T> getLevelOrder(BinaryTreeNode<T> *root)
{
    vector<T> result;
    LevelOrder(root, result);
    return result;

}
*/