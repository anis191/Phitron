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
void level_order(Node *root){
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
    Node *root = new Node(10);
    Node *a = new Node(20);
    Node *b = new Node(30);
    Node *c = new Node(40);
    Node *d = new Node(50);
    Node *e = new Node(60);
    Node *f = new Node(70);
    Node *g = new Node(80);
    Node *h = new Node(90);
    Node *i = new Node(100);

    //Connection:
    root->left = a;
    root->right = b;
    a->left = c;
    a->right = h;
    c->right = e;
    h->right = i;
    b->right = d;
    d->left = f;
    d->right = g;

    level_order(root);

    return 0;
}