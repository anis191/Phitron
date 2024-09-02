/*
A binary tree is uni-valued if every node in the tree has the same value.
Given the root of a binary tree, return true if the given tree is uni-valued, or false otherwise.
*/
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
/*
class Solution {
public:
    bool isUnivalTree(TreeNode* root) {
        if(root == NULL)
            return true;
        queue<TreeNode*>q;
        q.push(root);
        int v = root->val;
        while(!q.empty()){
            TreeNode *f = q.front();
            q.pop();
        
            if(f->val != v)
                return false;

            if(f->left != NULL)
                q.push(f->left);
            if(f->right != NULL)
                q.push(f->right);
        }
        return true;
    }
};
*/