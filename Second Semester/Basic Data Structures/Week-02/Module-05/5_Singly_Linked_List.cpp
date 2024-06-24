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
int main(){
    Node *head = new Node(5);
    Node *a = new Node(10);
    Node *b = new Node(15);
    head->next = a;
    a->next = b;

    cout<<head->val<<endl;
    cout<<a->val<<endl;
    cout<<b->val<<endl;

    //Print all using "head":-
    cout<<head->next->val<<endl;
    cout<<head->next->next->val<<endl;
    return 0;
}