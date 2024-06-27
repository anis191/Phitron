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
//Function for delete a node from any position:-
void delete_from_position(Node *head, int pos){
    Node *temp = head;
    for(int i=1; i<=pos-1; i++){
        temp = temp->next;
    }
    Node *deleteNode = temp->next;
    temp->next = temp->next->next;
    delete deleteNode;
}
int main(){
    Node *head = NULL;
    while(true){
        cout<<"Option 1:Insert at tail."<<endl;
        cout<<"Option 2:Delete from any position."<<endl;
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
            delete_from_position(head,pos);
        }else if(option == 3){
            print_linked_list(head);
        }else{
            cout<<"Program terminated!"<<endl;
            break;
        }
    }
    return 0;
}