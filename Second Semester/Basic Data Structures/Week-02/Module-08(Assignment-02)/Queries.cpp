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
void insert_at_head(Node* &head, Node* &tail, int v){
    Node *newNode = new Node(v);
    if(head == NULL){
        head = newNode;
        tail = newNode;
        return;
    }
    newNode->next = head;
    head = newNode;
    return;
}
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
int size_of_linked_list(Node *head){
    int count = 0;
    Node *temp = head;
    while(temp != NULL){
        count++;
        temp = temp->next;
    }
    return count;
}
void delete_head(Node* &head, Node* &tail){
    if(head == NULL){
        return;
    }
    Node *deleteNode = head;
    head = head->next;
    if(head == NULL){
        tail = NULL;
    }
    delete deleteNode;
    return;
}
void delete_position(Node *&head,Node *&tail, int v){
    Node *tmp = head;
    if(v >= size_of_linked_list(head)){
        return;
    }else if(v == 0){
        delete_head(head,tail);
    }else{
        for(int i=1; i<=v-1;i++){
            tmp = tmp->next;
        }
        Node *deleteNode = tmp->next;
        tmp->next = tmp->next->next;
        if(tmp->next == NULL){
            tail = tmp;
        }
        delete deleteNode;
        return;
    }
    return;
}
void print_linked_list(Node *head){
    Node *temp = head;
    while(temp != NULL){
        cout<<temp->val<<" ";
        temp = temp->next;
    }
    cout<<endl;
    return;
}
int main(){
    Node *head = NULL;
    Node *tail = NULL;
    int q; cin>>q;
    while(q--){
        int x,v;
        cin>>x>>v;
        if(x == 0){
            insert_at_head(head,tail,v);
        }else if(x == 1){
            insert_at_tail(head,tail,v);
        }else{
            delete_position(head,tail,v);
        }
        print_linked_list(head);
    }
    return 0;
}