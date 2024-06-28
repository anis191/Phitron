/*
Question: Take a singly linked list as input, then take q queries. In each query you will be given an index and value. You need to insert those values in the given index and print the linked list. If the index is invalid print “Invalid”.
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
void print_linked_list(Node *head){
    Node *temp = head;
    while(temp != NULL){
        cout<<temp->val<<" ";
        temp = temp->next;
    }
    cout<<endl;
    return;
}
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
void insert_at_head(Node* &head, int value){
    Node *newNode = new Node(value);
    newNode->next = head;
    head = newNode;
    return;
}
void insert_at_position(Node *head,int pos, int value, int *invalid){
    Node *newNode = new Node(value);
        Node *temp = head;
        for(int i=1; i<=pos-1; i++){
            temp = temp->next;
            if(temp == NULL){
                cout<<"Invalid"<<endl;
                *invalid = 1;
                return;
            }
        }
        newNode->next = temp->next;
        temp->next = newNode;
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
    int q; cin>>q;
    while(q--){
        int pos,value;
        cin>>pos>>value;
        int invalid = 0;
        if(pos == 0){
            insert_at_head(head,value);
        }else{
            insert_at_position(head,pos,value,&invalid);
        }
        if(invalid != 0){
            continue;
        }else{
            print_linked_list(head);
        }
    }
    return 0;
}