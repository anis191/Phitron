/*
Question: Take a singly linked list as input and check if the linked list is sorted in ascending order.
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
void check_asending(Node *head){
    int yes =0;
    Node *i = head;
    Node *j = head->next;
    int size = size_of_linked_list(head);
    for(int x=1; x<=size-1; x++){
            if(j->val < i->val){
                cout<<"NO"<<endl;
                yes++;
                break;
            }else{
                i = i->next;
                j = j->next;
            }
    }
   if(yes == 0){
    cout<<"YES";
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
    check_asending(head);
    return 0;
}