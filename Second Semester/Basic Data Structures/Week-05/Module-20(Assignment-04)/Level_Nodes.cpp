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
void Xth_level(Node *root, vector<int>& v, int x){
    queue<pair<Node *, int> >q;
    if(root != NULL)
        q.push({root,0});
    while(!q.empty()){
        pair<Node*,int>pr = q.front();
        Node *node = pr.first;
        int level = pr.second;
        q.pop();

        if(level == x){
            v.push_back(node->val);
        }

        if(node->left != NULL)
            q.push({node->left, level+1});
        if(node->right != NULL)
            q.push({node->right, level+1});
    }
}
int main(){
    Node *root = input_tree();
    int x; cin>>x;
    vector<int>v;
    Xth_level(root,v,x);
    if(v.size()==0){
        cout<<"Invalid"<<endl;
    }else{
        for(int i:v)
            cout<<i<<" ";
    }
    return 0;
}