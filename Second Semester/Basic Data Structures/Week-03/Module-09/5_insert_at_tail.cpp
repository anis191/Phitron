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
void insert_at_head(Node* &head, Node* &tail, int v){
    Node *newNode = new Node(v);
    if(head == NULL){
        head = newNode;
        tail = newNode;
        return;
    }
    newNode->next = head;
    head->prev = newNode;
    head = newNode;
    return;
}
int size(Node *head){
    Node *tmp = head;
    int count = 0;
    while(tmp != NULL){
        count++;
        tmp = tmp->next;
    }
    return count;
}
//Insert at tail function:-
void insert_at_tail(Node *head, Node* &tail, int v){
    Node *newNode = new Node(v);
    if(tail == NULL){
        head = newNode;
        tail - newNode;
        return;
    }
    tail->next = newNode;
    newNode->prev = tail;
    tail = newNode;
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
    if(pos == 0){
        insert_at_head(head,tail,v);
    }else if(pos == size(head)){
        insert_at_tail(head,tail,v);
    }else{
        insert_any_position(head,pos,v);
    }

    normal_print(head); cout<<endl;
    reverse_print(tail);
    return 0;
}