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
void reverse_linked_list(Node* &head, Node* cur){
    if(cur->next == NULL){
        head = cur;
        return;
    }
    reverse_linked_list(head,cur->next);
    cur->next->next = cur;
    cur->next = NULL;
    return;
}
void insert_at_tail(Node* &head, Node* &tail, int value){
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
void print(Node *head){
    Node *tmp = head;
    while(tmp != NULL){
        cout<<tmp->val<<" ";
        tmp = tmp->next;
    }
    return;
}
int main(){
    Node *head = NULL;
    Node *tail = NULL;
    while(true){
        int value; cin>>value;
        if(value == -1){
            break;
        }
        insert_at_tail(head,tail,value);
    }
    reverse_linked_list(head,head);
    print(head);
    return 0;
}