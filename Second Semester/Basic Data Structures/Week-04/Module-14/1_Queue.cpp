// Queue Implement using "Singly Linked List":-
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
class myQueue{
    public:
    //Data Structure --> Singly Linked List
    Node *head = NULL;
    Node *tail = NULL;
    int sz = 0;
    void push(int val){
        sz++;
        Node *newNode = new Node(val);
        //insert_at_tail()
        if(head == NULL){
            head = newNode;
            tail = newNode;
            return;
        }
        tail->next = newNode;
        tail = newNode;
        return;
    }
    void pop(){
        sz--;
        //delete_head()
        Node *deleteNode = head;
        head = head->next;
        delete deleteNode;
        if(head == NULL)
            tail = NULL;
        return;
    }
    int front(){
        return head->val;
    }
    int size(){
        return sz;
    }
    bool empty(){
        if(sz == 0)
            return true;
        else
            return false;
    }
};
int main(){
    myQueue q;
    int n; cin>>n;
    for(int i=1; i<=n; i++){
        int x; cin>>x;
        q.push(x);
    }
    while(! q.empty()){
        cout<<q.front()<<" ";
        q.pop();
    }
    return 0;
}