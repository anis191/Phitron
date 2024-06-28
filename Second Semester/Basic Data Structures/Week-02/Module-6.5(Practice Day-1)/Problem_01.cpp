//Question: Take a singly linked list as input and print the size of the linked list.
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
    return;
}
int size_of_linked_list(Node *head){
    int count = 0;
    Node *temp = head;
    while(temp != NULL){
        count++;
        temp = temp->next;
    }
    return count;
}
int main(){
    Node *head = NULL;
    int value;
    while(true){
        cin>>value;
        if(value == -1){
            break;
        }
        insert_at_tail(head,value);
    }
    int count = size_of_linked_list(head);
    cout<<count;
    return 0;
}