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
Node *Convert(int a[],int n,int l,int r){
    if(l > r)
        return NULL;
    int mid = (l+r)/2;
    Node *root = new Node(a[mid]);
    Node *leftRoot = Convert(a,n,l,mid-1);
    Node *rightRoot = Convert(a,n,mid+1,r);
    root->left = leftRoot;
    root->right = rightRoot;
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
int main(){
    int n; cin>>n;
    int a[n];
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
    Node *root = Convert(a,n,0,n-1);
    level_order(root);
    return 0;
}