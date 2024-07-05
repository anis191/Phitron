// #include <bits/stdc++.h>
// using namespace std;
// class Node{
// public:
//     int val;
//     Node *next;
//     Node(int val){
//         this->val = val;
//         this->next = NULL;
//     }
// };
// void insert_at_tail(Node* &head, Node* &tail, int v){
//     Node *newNode = new Node(v);
//     if(head == NULL){
//         head = newNode;
//         tail = newNode;
//         return;
//     }
//     tail->next = newNode;
//     tail = newNode;
//     return;
// }
// void sort_linked_list(Node *head){
//     for(Node *i=head; i->next != NULL; i=i->next){
//         for(Node *j=i->next; j!=NULL; j=j->next){
//             if(i->val > j->val){
//                 swap(i->val,j->val);
//             }
//         }
//     }
// }
// void linked_list_recursion(Node *n){
//     if(n == NULL ||  n->next == NULL){
//         return;
//     }
//     if(n->val == n->next->val){
//         Node *deleteNode = n->next;
//         n->next = n->next->next;
//         delete deleteNode;
//         linked_list_recursion(n);
//     }else{
//         linked_list_recursion(n->next);
//     }
// }
// void print_linked_list(Node *head){
//     Node *temp = head;
//     while(temp != NULL){
//         cout<<temp->val<<" ";
//         temp = temp->next;
//     }
//     cout<<endl;
//     return;
// }
// int main(){
//     Node *head = NULL;
//     Node *tail = NULL;
//     while(true){
//         int value; cin>>value;
//         if(value == -1){
//             break;
//         }
//         insert_at_tail(head,tail,value);
//     }
//     sort_linked_list(head);
//     linked_list_recursion(head);
//     print_linked_list(head);
// }
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
void sort_linked_list(Node *head){
    for(Node *i=head; i->next != NULL; i=i->next){
        for(Node *j=i->next; j!=NULL; j=j->next){
            if(i->val > j->val){
                swap(i->val,j->val);
            }
        }
    }
}
// void linked_list_recursion(Node* &tail,Node *n){
//     int c = 0;
//     if(n == NULL){
//         return;
//     }
//     linked_list_recursion(tail,n->next);
//     // cout<<n->val<<" ";
//     Node *tmp = n;
//     if(tmp->val == tmp->next->val){
//         tmp->next = tmp->next->next;
//     }
// }
void linked_list_recursion(Node *n) {
    if (n == NULL || n->next == NULL) {
        return;
    }
    if (n->val == n->next->val) {
        Node *temp = n->next;
        n->next = temp->next;
        delete temp;
        linked_list_recursion(n); // Check again after deletion
    } else {
        linked_list_recursion(n->next); // Move to next node
    }
}

void print_linked_list(Node *head){
    Node *temp = head;
    while(temp != NULL){    //n-times --> O(n)
        cout<<temp->val<<" ";
        temp = temp->next;
    }
    cout<<endl;
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
    sort_linked_list(head);
    linked_list_recursion(head);
    print_linked_list(head);
}