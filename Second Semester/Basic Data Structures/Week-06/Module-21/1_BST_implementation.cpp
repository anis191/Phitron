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
bool bst_search(Node *root, int x){
    if(root == NULL)
        return false;
    if(root->val == x)
        return true;
    if(x < root->val){
        bool l = bst_search(root->left,x);
        return l;
    }else{
        bool r = bst_search(root->right,x);
        return r;
    }
}
int main(){
    Node *root = input_tree();
    int x;
    bool ans = bst_search(root,19);
    if(ans == true)
        cout<<"YES, Found"<<endl;
    else
        cout<<"NO, not found"<<endl;
    return 0;
}