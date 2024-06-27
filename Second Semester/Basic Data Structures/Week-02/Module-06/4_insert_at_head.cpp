/*
This code is full same like previous program. We just update the option-2 for "Insert at any position" operation for when user input the position is "0" means "head".
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
//Function for insert node at tail in Linked List:-
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
    //Now we stay on tail!
    temp->next = newNode;
    return;
}
//Function for print Linked List:-
void print_linked_list(Node *head){
    cout<<"Your Linked List is: ";
    Node *temp = head;
    while(temp != NULL){
        cout<<temp->val<<" ";
        temp = temp->next;
    }
    cout<<endl;
    return;
}
//Function for insert at any position:-
void insert_at_any_position(Node *head, int pos, int value){
    Node *newNode = new Node(value);
    Node *temp = head;
    for(int i=1; i<=pos-1; i++){
        temp = temp->next;
    }
    newNode->next = temp->next;
    temp->next = newNode;
}
//Function for insert at any position(when position is "0"):-
void insert_at_head(Node* &head, int value){
    Node *newNode = new Node(value);
    newNode->next = head;
    head = newNode;
}
int main(){
    Node *head = NULL;
    while(true){
        cout<<"Option 1:Insert at tail."<<endl;
        cout<<"Option 2:Insert at any position."<<endl;
        cout<<"Option 3:Print full linked list."<<endl;
        cout<<"Option 4:Program stop."<<endl;
        int option; cin>>option;
        if(option == 1){
            cout<<"Enter a value: ";
            int value; cin>>value;
            insert_at_tail(head, value);
            cout<<"Value inserted!"<<endl;
        }else if(option == 2){
            cout<<"Enter position: ";
            int pos; cin>>pos;
            cout<<"Enter a value: ";
            int value; cin>>value;
            if(pos == 0){
                insert_at_head(head,value);
            }else{
                insert_at_any_position(head,pos,value);
            }
        }else if(option == 3){
            print_linked_list(head);
        }else{
            cout<<"Program terminated!"<<endl;
            break;
        }
    }
    return 0;
}