//Calculate Time Complexity:-
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
void insert_at_tail(Node* &head, Node* &tail, int value){ //O(1)
    Node *newNode = new Node(value);
    if(head == NULL){
        head = newNode;
        tail = newNode;
        return;
    }
    tail->next = newNode;
    tail = newNode;
    return;
}
//Function for print Linked List:-
void print_linked_list(Node *head){
    cout<<"Your Linked List is: ";
    Node *temp = head;
    while(temp != NULL){    //n-times --> O(n)
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
    for(int i=1; i<=pos-1; i++){ //Here i=1 because, we can't insert at head.
        temp = temp->next;
    }                            //n-times --> O(n)
    newNode->next = temp->next;
    temp->next = newNode;
}
int size_of_linked_list(Node *head){
    int count = 0;
    Node *temp = head;
    while(temp != NULL){    //n-times --> O(n)
        count++;
        temp = temp->next;
    }
    return count;
}
int main(){
    Node *head = NULL;
    Node *tail = NULL;
    while(true){
        cout<<"Option 1:Insert at tail."<<endl;
        cout<<"Option 2:Insert at any position."<<endl;
        cout<<"Option 3:Print full linked list."<<endl;
        cout<<"Option 4:Program stop."<<endl;
        int option; cin>>option;
        if(option == 1){
            cout<<"Enter a value: ";
            int value; cin>>value;
            insert_at_tail(head,tail,value);
            cout<<"Value inserted!"<<endl;
        }else if(option == 2){
            cout<<"Enter position: ";
            int pos; cin>>pos;
            cout<<"Enter a value: ";
            int value; cin>>value;
            if(pos == size_of_linked_list(head)){
                insert_at_tail(head,tail,value);
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
/*
void insert_at_tail() --> O(1)
void print_linked_list() --> O(n)
void insert_at_any_position() --> O(n)
int size_of_linked_list() --> O(n)
=> Total time complexity = O(1)+O(n)+O(n)+O(n) => O(1+(n+n+n)) => O(3n) => O(n)
*/