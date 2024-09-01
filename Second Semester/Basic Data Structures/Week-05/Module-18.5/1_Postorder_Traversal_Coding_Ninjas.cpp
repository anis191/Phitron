/*
Problem statement
You have been given a Binary Tree of 'n' nodes, where the nodes have integer values. Your task is to return its postorder traversal.
For Example:
For the given tree below,
Postorder traversal for the given tree will be [4, 5, 2, 3, 1]. Hence, the answer is [4, 5, 2, 3, 1].
*/
/*
Code:-
void postorder(TreeNode *root, vector<int>& result){
    if(root == NULL)
        return;
    postorder(root->left,result);
    postorder(root->right,result);
    result.push_back(root->data);
}
vector<int> postorderTraversal(TreeNode *root)
{
    vector<int>result;
    postorder(root,result);
    return result;
}
*/