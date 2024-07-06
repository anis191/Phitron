/*
Question: You have a doubly linked list which is empty initially. You need to take a value Q which refers to queries. For each query you will be given X and V. You will insert the value V to the Xth index of the doubly linked list and print the list in both left to right and right to left. If the index is invalid then print “Invalid”.
*/
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
int size(Node *head){
    int count=0;
    Node *tmp = head;
    while(tmp != NULL){
        count++;
        tmp = tmp->next;
    }
    return count;
}
void insert_at_tail(Node* &head, Node* &tail, int v){
    Node *newNode = new Node(v);
    if(tail == NULL){
        head = newNode;
        tail = newNode;
        return;
    }
    tail->next = newNode;
    newNode->prev = tail;
    tail = newNode;
    return;
}
void insert_at_head(Node* &head,Node* &tail, int v){
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
void insert_any_position(Node *head, int x, int v){
    Node *newNode = new Node(v);
    Node *tmp = head;
    for(int i=1; i<=x-1; i++){
        tmp = tmp->next;
    }
    newNode->next = tmp->next;
    tmp->next = newNode;
    newNode->next->prev = newNode;
    newNode->prev = tmp;
    return;
}
void normal_print(Node *head){
    Node *tmp = head;
    while(tmp != NULL){
        cout<<tmp->val<<" ";
        tmp = tmp->next;
    }
    cout<<endl;
    return;
}
void reverse_print(Node *tail){
    Node *tmp = tail;
    while(tmp != NULL){
        cout<<tmp->val<<" ";
        tmp = tmp->prev;
    }
    cout<<endl;
    return;
}
int main(){
    Node *head = NULL;
    Node *tail = NULL;
    int q; cin>>q;
    while(q--){
        int x,v; cin>>x>>v;
        if(x > size(head)){
            cout<<"Invalid"<<endl;
        }else if(x == size(head)){
            insert_at_tail(head,tail,v);
            normal_print(head);
            reverse_print(tail);
        }else if(x == 0){
            insert_at_head(head,tail,v);
            normal_print(head);
            reverse_print(tail);
        }else{
            insert_any_position(head,x,v);
            normal_print(head);
            reverse_print(tail);
        }
    }
    return 0;
}