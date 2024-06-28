/*
Question: Take a singly linked list as input and check if the linked list contains any duplicate value. You can assume that the maximum value will be 100.
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
void check_duplicate(Node *head){
    int no =0;
    Node *i = head;
    Node *j = head->next;
    int size = size_of_linked_list(head);
    for(int x=1; x<=size-1; x++){
        while(j != NULL){
            if(j->val == i->val){
                cout<<"YES"<<endl;
                no++;
                break;
            }else{
                j = j->next;
            }
        }
        if(no != 0){
            break;
        }else{
            i = i->next;
            j = i->next;
        }
    }
    if(no == 0){
        cout<<"NO"<<endl;
        return;
    }
}
int main(){
    Node *head = NULL;
    while(true){
        int value; cin>>value;
        if(value == -1)
            break;
        insert_at_tail(head,value);
    }
    check_duplicate(head);
    return 0;
}