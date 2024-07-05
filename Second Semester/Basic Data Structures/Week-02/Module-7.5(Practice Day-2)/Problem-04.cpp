/*
Question: Take a singly linked list as input, then print the maximum value of them.
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
void sort_linked_list(Node *head){
    for(Node *i=head; i->next != NULL; i=i->next){
        for(Node *j=i->next; j!=NULL; j=j->next){
            if(i->val < j->val){
                swap(i->val,j->val);
            }
        }
    }
}
int main(){
    Node *head = NULL;
    Node *tail = NULL;
    while(true){
        int v; cin>>v;
        if(v == -1)
            break;
    insert_at_tail(head,tail,v);
    }
    sort_linked_list(head);
    cout<<head->val<<endl;
    return 0;
}