/*
Question: Take two doubly linked lists as input and check if they are the same or not.
*/
#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int val;
    Node *next;
    Node *prev;
    Node(int val){
        this->val = val;
        this->next = NULL;
        this->prev = NULL;
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
    newNode->prev = tail;
    tail = newNode;
    return;
}
void print(Node *head){
    Node *tmp = head;
    while(tmp != NULL){
        cout<<tmp->val<<" ";
        tmp = tmp->next;
    }
}
int size(Node *head){
    int count=0;
    Node *tmp = head;
    while(tmp != NULL){
        count++;
        tmp = tmp->next;
    }
    return count;
}
void compare_two_linked_list(Node *head1,Node *head2){
    Node *tmp1 = head1;
    Node *tmp2 = head2;
    bool yes = true;
    while(tmp1 != NULL){
        if(tmp1->val != tmp2->val){
            yes = false;
            cout<<"NO"<<endl;
            break;
        }
        tmp1 = tmp1->next;
        tmp2 = tmp2->next;
    }
    if(yes == true)
        cout<<"YES"<<endl;
    return;
}
int main(){
    //Linked list-1
    Node *head1 = NULL;
    Node *tail1 = NULL;
    while(true){
        int v; cin>>v;
        if(v == -1)
            break;
        insert_at_tail(head1,tail1,v);
    }

    //Linked list-2
    Node *head2 = NULL;
    Node *tail2 = NULL;
    while(true){
        int v; cin>>v;
        if(v == -1)
            break;
        insert_at_tail(head2,tail2,v);
    }
    if(size(head1) != size(head2)){
        cout<<"NO"<<endl;
    }else{
        compare_two_linked_list(head1,head2);
    }
    return 0;
}