#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int val;
    Node *left;
    Node *right;
    Node(int val){
        this->val = val;
        this->left = NULL;
        this->right = NULL;
    }
};
Node* input_tree(){
    int Root; cin>>Root;
    Node *root;
    if(Root == -1){
        root = NULL;
    }else{
        root = new Node(Root);
    }
    queue<Node*>q;
    if(root != NULL){
        q.push(root);
    }
    while(! q.empty()){
        Node *p = q.front();
        q.pop();

        int l,r; cin>>l>>r;
        Node *myLeft;
        Node *myRight;
        if(l == -1)
            myLeft = NULL;
        else
            myLeft = new Node(l);
        if(r == -1)
            myRight = NULL;
        else
            myRight = new Node(r);
        p->left = myLeft;
        p->right = myRight;

        if(p->left != NULL)
            q.push(p->left);
        if(p->right != NULL)
            q.push(p->right);
    }
    return root;
}
int max_depth(Node *root){
    queue<pair<Node *, int> >q;
    if(root != NULL)
        q.push({root,1});
    int max_level = 0;
    while(!q.empty()){
        pair<Node*,int>pr = q.front();
        Node *node = pr.first;
        int level = pr.second;
        q.pop();

        max_level = level;

        if(node->left != NULL)
            q.push({node->left, level+1});
        if(node->right != NULL)
            q.push({node->right, level+1});
    }
    return max_level;
}
int count_total_nodes(Node *root){
    if(root == NULL)
        return 0;
    int l = count_total_nodes(root->left);
    int r = count_total_nodes(root->right);
    return l+r+1;
}
int main(){
    Node *root = input_tree();
    int max_level = max_depth(root);
    int total_nodes = count_total_nodes(root);
    long long int x = pow(2,max_level)-1;
    if(total_nodes == x)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
    return 0;
}