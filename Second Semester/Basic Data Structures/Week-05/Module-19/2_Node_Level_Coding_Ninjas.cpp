/*
Problem statement
Ninja has been given a binary tree having N nodes and an integer M, he needs to find the level of node M. He finds it difficult to solve and asks for your help.
Note:
Consider root to be at level 1. It is guaranteed that all the nodes in the binary tree have distinct values.
*/
#include <bits/stdc++.h> 
/************************************************************

    Following is the TreeNode class structure

    template <typename T>
    class TreeNode {
       public:
        T val;
        bool isOriginal;
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
int nodeLevel(TreeNode<int>* root, int searchedValue)
{
    queue<pair<TreeNode<int>*,int> >q;
    q.push({root,1});
    while(!q.empty()){
    //1.Line theke ber koro
    pair<TreeNode<int>* , int>pr = q.front();
    TreeNode<int>* node = pr.first;
    int level = pr.second;
    q.pop();

    //Jabotio kaj
    if(node->val == searchedValue){
        return level;
    }

    //Children ghulo push koro
    if(node->left != NULL)
        q.push({node->left, level+1});
    if(node->right != NULL)
        q.push({node->right, level + 1});
}
}
*/