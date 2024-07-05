/*
Question: Take a singly linked list as input and print the reverse of the linked list.
*/
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
void insert_at_tail(Node* &head, Node* &tail, int v){
    Node *newNode = new Node(v);
    if(head == NULL){
        head = newNode;
        tail = newNode;
        return;
    }
    tail->next = newNode;
    tail = newNode;
    return;
}
void reverse_linked_list(Node* tmp){
    if(tmp == NULL)
        return;
    reverse_linked_list(tmp->next);
    cout<<tmp->val<<" ";
}
int main(){
    Node *head = NULL;
    Node *tail = NULL;
    while(true){
        int v; cin>>v;
        if(v == -1)
            break;
    insert_at_tail(head,tail,v);
    }
    reverse_linked_list(head);
    return 0;
}