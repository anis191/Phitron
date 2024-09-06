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
void level_order(Node *root){
    if(root == NULL)
        return;
    queue<Node*>q;
    q.push(root);
    while(! q.empty()){
        //1.Line theke ber koro
        Node *f = q.front();
        q.pop();

        //2.Jabotiow kaj koro
        cout<<f->val<<" ";

        //3.Children gulo queue te rako
        if(f->left != NULL){
            q.push(f->left);
        }
        if(f->right != NULL){
            q.push(f->right);
        }
    }
}
void Insert_node(Node* &root, int x){
    if(root == NULL){
        root = new Node(x);
        return;
    }
    if(x < root->val){
        if(root->left == NULL){
            root->left = new Node(x);
        }else{
            Insert_node(root->left,x);
        }
    }else{
        if(root->right == NULL){
            root->right = new Node(x);
        }else{
            Insert_node(root->right,x);
        }
    }
}
int main(){
    Node *root = input_tree();
    Insert_node(root,2);
    level_order(root);
    return 0;
}