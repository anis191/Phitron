/*
Question: Take a doubly linked list as input and check if it forms any palindrome or not.
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
void check_palindrome(Node *head, Node *tail){
    bool yes = true;
    Node *normal = head;
    Node *reverse = tail;
    while(normal != NULL){
        if(normal->val != reverse->val){
            yes = false;
            cout<<"NO";
            break;
        }
        normal = normal->next;
        reverse = reverse->prev;
    }
    if(yes == true)
        cout<<"YES";
    return;
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
    check_palindrome(head,tail);
}