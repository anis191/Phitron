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
void left_print(Node *root){
    if(root->left != NULL){
        left_print(root->left);
        cout<<root->left->val<<" ";
    }else if(root->right != NULL){
        left_print(root->right);
        cout<<root->right->val<<" ";
    }
}
void right_print(Node *root){
    if(root->right != NULL){
        cout<<root->right->val<<" ";
        right_print(root->right);
    }else if(root->left != NULL){
        cout<<root->left->val<<" ";
        right_print(root->left);
    }
}
int main(){
    Node *root = input_tree();
    if(root->left != NULL){
        left_print(root);
        cout<<root->val<<" ";
    }else{
        cout<<root->val<<" ";
    }
    if(root->right != NULL){
        right_print(root);
    }
    return 0;
}