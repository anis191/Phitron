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
void leaf_nodes(Node *root, vector<int>& v){
    queue<Node*>q;
    q.push(root);
    while(!q.empty()){
        Node *f = q.front();
        q.pop();

        if(f->left == NULL && f->right == NULL)
            v.push_back(f->val);

        if(f->left != NULL)
            q.push(f->left);
        if(f->right != NULL)
            q.push(f->right);
    }
}
int main(){
    Node *root = input_tree();
    vector<int>v;
    leaf_nodes(root,v);
    sort(v.begin(), v.end(), greater<int>());
    for(int i: v)
        cout<<i<<" ";
    return 0;
}