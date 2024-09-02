/*
Problem statement
You have been given a binary tree of integers. You are supposed to find the left view of the binary tree. The left view of a binary tree is the set of all nodes that are visible when the binary tree is viewed from the left side.
*/
#include <bits/stdc++.h> 
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
vector<int> getLeftView(TreeNode<int> *root)
{
    bool fr[3005]={false};
    queue< pair<TreeNode<int>* , int> >q;
    if(root != NULL)
        q.push({root,1});
    vector<int>v;
    while(!q.empty()){
        //Line theke ber koro
        pair<TreeNode<int>* , int> pr = q.front();
        TreeNode<int>* node = pr.first;
        int level = pr.second;
        q.pop();

        //Jabotio kaj koro
        if(fr[level] == false){
            v.push_back(node->data);
            fr[level] = true;
        }

        //Children ghulo push koro
        if(node->left != NULL)
            q.push({node->left, level+1});
        if(node->right != NULL)
            q.push({node->right, level+1});
    }
    return v;
}
*/