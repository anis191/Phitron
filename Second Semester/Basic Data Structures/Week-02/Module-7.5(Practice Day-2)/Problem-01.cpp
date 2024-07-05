/*
Question: Take two singly linked lists as input and check if their sizes are same or not.
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
void insert_at_tail(Node* &head, Node* &tail, int v){
    Node *newNode = new Node(v);
    if(head == NULL){
        head = newNode;
        tail = newNode;
        return;
    }
    tail->next = newNode;
    tail = newNode;
    return;
}
int size_of_linked_list(Node* head){
    Node *tmp = head;
    int count = 0;
    while(tmp != NULL){
        count++;
        tmp = tmp->next;
    }
    return count;
}
int main(){
    int a,b;
    Node *head1 = NULL;
    Node *tail1 = NULL;
    while(true){
        int v; cin>>v;
        if(v == -1)
            break;
        insert_at_tail(head1,tail1,v);
    }
    a = size_of_linked_list(head1);

    Node *head2 = NULL;
    Node *tail2 = NULL;
    while(true){
        int v; cin>>v;
        if(v == -1)
            break;
        insert_at_tail(head2,tail2,v);
    }
    b = size_of_linked_list(head2);
    if(a == b)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
    return 0;
}