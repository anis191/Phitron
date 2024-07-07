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
void insert_at_tail(Node* &head, Node* &tail, int value){
    Node *newNode = new Node(value);
    if(head == NULL){
        head = newNode;
        tail = newNode;
        return;
    }
    tail->next = newNode;
    tail = newNode;
    return;
}
int main(){
    Node *head = NULL;
    Node *tail = NULL;
    while(true){
        int value; cin>>value;
        if(value == -1){
            break;
        }
        insert_at_tail(head,tail,value);
    }
    Node *tmp = head;
    list<int>a;
    while(tmp != NULL){
        a.push_back(tmp->val);
        tmp = tmp->next;
    }
    a.sort();
    a.unique();
    for(int i: a){
        cout<<i<<" ";
    }
    cout<<endl;
    return 0;
}