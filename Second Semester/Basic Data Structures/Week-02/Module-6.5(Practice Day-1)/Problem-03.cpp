/*
Question: Take a singly linked list as input and print the middle element. If there are multiple values in the middle print both.
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
    //Now temp == tail
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
void print_middle(Node *head){
    Node *temp = head;
    int size = size_of_linked_list(head);
    if(size % 2 == 0){
        int pos1 = size/2;
        int pos2 = pos1+1;
        for(int i=1; i<=pos1-1; i++){
            temp = temp->next;
        }
        cout<<temp->val<<" ";
        cout<<temp->next->val;
    }else{
        int pos = ceill(size/2);
        for(int i=1; i<=pos; i++){
            temp = temp->next;
        }
        cout<<temp->val;
    }
    return;
}
int main(){
    Node *head = NULL;
    while(true){
        int value; cin>>value;
        if(value == -1)
            break;
        insert_at_tail(head,value);
    }
    print_middle(head);
    return 0;
}