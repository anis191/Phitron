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
int check_value(Node *head, int x, bool &found){
    int pos = 0;
    Node *temp = head;
    while(temp != NULL){
        if(temp->val == x){
            found = true;
            return pos;
        }
        temp = temp->next;
        pos++;
    }
    return pos;
}
int main(){
    int t; cin>>t;
    for(int tc=1; tc<=t; tc++){
        Node *head = NULL;
        Node *tail = NULL;
        while(true){
            int v; cin>>v;
            if(v == -1){
                break;
            }
            insert_at_tail(head,tail,v);
        }
        int x; cin>>x;
        bool found = false;
        int pos = check_value(head,x,found);
        if(found == false){
            cout<<-1<<endl;
        }else{
            cout<<pos<<endl;
        }
    }
    return 0;
}