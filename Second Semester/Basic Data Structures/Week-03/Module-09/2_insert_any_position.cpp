#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int val;
    Node *next;
    Node *prev;
    Node(int val){
        this->val = val;
        this->next = NULL;
        this->prev = NULL;
    }
};
void normal_print(Node *head){
    Node *tmp = head;
    while(tmp != NULL){
        cout<<tmp->val<<" ";
        tmp = tmp->next;
    }
    return;
}
void reverse_print(Node *tail){
    Node *tmp = tail;
    while(tmp != NULL){
        cout<<tmp->val<<" ";
        tmp = tmp->prev;
    }
    return;
}
void insert_any_position(Node *head, int pos, int v){
    Node *newNode = new Node(v);
    Node *tmp = head;
    for(int i=1; i<=pos-1; i++){
        tmp = tmp->next;
    }
    newNode->next = tmp->next;
    tmp->next = newNode;
    newNode->next->prev = newNode;
    newNode->prev = tmp;
    return;
}
int main(){
    Node *head = new Node(10);
    Node *a = new Node(20);
    Node *b = new Node(30);
    Node *tail = b;

    //Connections:-
    head->next = a;
    a->prev = head;
    a->next = b;
    b->prev = a;

    //Insert at any position:-
    int pos,v; cin>>pos>>v;
    insert_any_position(head,pos,v);

    //Print Linked List:-
    normal_print(head);
    cout<<endl;
    reverse_print(tail);
    return 0;
}