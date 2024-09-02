/*
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
    vector<int> getLeaf(TreeNode* root){
        vector<int>v;
        queue<TreeNode*>q;
        q.push(root);
        while(!q.empty()){
            TreeNode *f = q.front();
            q.pop();

            if(f->left == NULL && f->right == NULL)
                v.push_back(f->val);

            if(f->left != NULL)
                q.push(f->left);
            if(f->right != NULL)
                q.push(f->right);
        }
        return v;
    }
    bool leafSimilar(TreeNode* root1, TreeNode* root2) {
        vector<int> tree1 = getLeaf(root1);
        vector<int> tree2 = getLeaf(root2);
        if(tree1 == tree2)
            return true;
        else
            return false;
    }
};
*/