/*
Problem statement
You have been given a Binary Tree of 'n' nodes, where the nodes have integer values. Your task is to return the In-Order traversal of the given binary tree.
*/
/*
    Following is Binary Tree Node structure:
    class TreeNode
    {
    public:
        int data;
        TreeNode *left, *right;
        TreeNode() : data(0), left(NULL), right(NULL) {}
        TreeNode(int x) : data(x), left(NULL), right(NULL) {}
        TreeNode(int x, TreeNode *left, TreeNode *right) : data(x), left(left), right(right) {}
    };
*/
/*
void InOrderTraversal(TreeNode *root, vector<int>& result){
    if(root == NULL)
        return;
    InOrderTraversal(root->left,result);
    result.push_back(root->data);
    InOrderTraversal(root->right,result);  
}
vector<int> getInOrderTraversal(TreeNode *root)
{
    vector<int>result;
    InOrderTraversal(root,result);
    return result;
}
*/