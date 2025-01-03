// Using Doubly Linked List:
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
class myStack{
    public:
    Node *head = NULL;
    Node *tail = NULL;
    int sz = 0;
    void push(int val){
        sz++;
        //Insert_at_tail()
        Node *newNode = new Node(val);
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
    void pop(){
        sz--;
        //delete_tail();
        Node *deleteNode = tail;
        tail = tail->prev;
        if(tail == NULL){
            head = NULL;
        }else{
            tail->next = NULL;
        }
        delete deleteNode;
    }
    int top(){
        return tail->val;
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
    myStack st;
    int n; cin>>n;
    for(int i=1; i<=n; i++){
        int x; cin>>x;
        st.push(x);
    }
    while(! st.empty()){
        cout<<st.top()<<" ";
        st.pop();
    }
    return 0;
}