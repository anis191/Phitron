#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int val;
    Node *next;
    Node(int val){
        this->val = val;
        this->next = NULL;
    }
};
void insert_at_tail(Node* &head, Node* &tail, int value,int &mx, int &mn){
    Node *newNode = new Node(value);
    if(head == NULL){
        head = newNode;
        tail = newNode;
        mx = head->val;
        mn = head->val;
        return;
    }
    tail->next = newNode;
    tail = newNode;
    if(mx < tail->val){
        mx = tail->val;
    }
    if(mn > tail->val){
        mn = tail->val;
    }
    return;
}
int main(){
    Node *head = NULL;
    Node *tail = NULL;
    int mx=0,mn=0;
    while(true){
        int value; cin>>value;
        if(value == -1){
            break;
        }
        insert_at_tail(head,tail,value,mx,mn);
    }
    cout<<mx-mn;
    return 0;
}