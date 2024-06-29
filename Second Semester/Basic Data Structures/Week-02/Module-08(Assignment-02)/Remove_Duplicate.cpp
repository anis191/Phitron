#include <bits/stdc++.h>
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
int size_of_linked_list(Node *head){
    int count = 0;
    Node *temp = head;
    while(temp != NULL){
        count++;
        temp = temp->next;
    }
    return count;
}
void duplicate_found(Node *&head, Node* &tail, int pos){
    if(pos == 1){
        Node *deleteNode = head;
        head = head->next;
        delete deleteNode;
        if(head == NULL){
            tail = NULL;
        }
    }else{
        Node *tmp = head;
        for(int i=1; i<pos-1; i++){
            tmp = tmp->next;
        }
        Node *deleteNode = tmp->next;
        tmp->next = tmp->next->next;
        if (deleteNode == tail) {
            tail = tmp;
        }
        delete deleteNode;
    }
}
void delete_duplicate(Node *head, Node* &tail){
    int pos1 = 0;
    for(Node *i=head; i != NULL; i=i->next){
        pos1++;
        Node *p = i;
        int pos2 = pos1;
        for (Node *j=i->next; j!=NULL; j=j->next){
            pos2++;
            if(i->val == j->val){
                duplicate_found(head,tail,pos2);
                pos2--;
            }else {
                p=j;
            }
        }
    }
}
void print_linked_list(Node *head){
    Node *temp = head;
    while(temp != NULL){
        cout<<temp->val<<" ";
        temp = temp->next;
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
    delete_duplicate(head,tail);
    print_linked_list(head);
    return 0;
}