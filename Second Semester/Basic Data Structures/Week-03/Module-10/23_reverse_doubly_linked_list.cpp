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
void insert_at_tail(Node *&head, Node* &tail, int v){
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
void normal_print(Node *head){
    Node *tmp = head;
    while(tmp != NULL){
        cout<<tmp->val<<" ";
        tmp = tmp->next;
    }
    return;
}
void reverse_linked_list(Node *head, Node *tail){
    Node *i = head;
    Node *j = tail;
    while(i != j && i->next != j){
        swap(i->val, j->val);
        i = i->next;
        j = j->prev;
    }
    swap(i->val,j->val);
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
    normal_print(head);
    reverse_linked_list(head,tail); cout<<endl;
    normal_print(head);
    return 0;
}