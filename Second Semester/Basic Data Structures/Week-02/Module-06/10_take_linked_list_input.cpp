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
void insert_at_tail(Node* &head, int value){
    Node *newNode = new Node(value);
    if(head == NULL){
        head = newNode;
        return;
    }
    Node *temp = head;
    while(temp->next != NULL){
        temp = temp->next;
    }
    temp->next = newNode;
}
void print_linked_list(Node *head){
    Node *temp = head;
    while(temp != NULL){
        cout<<temp->val<<" ";
        temp = temp->next;
    }
}
int main(){
    int value;
    Node *head = NULL;
    while(true){
        cin>>value;
        if(value == -1)
            break;
        insert_at_tail(head,value);
    }
    print_linked_list(head);
    return 0;
}