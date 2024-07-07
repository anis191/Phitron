#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    string val;
    Node *next;
    Node *prev;
    Node(string val){
        this->val = val;
        this->next = NULL;
        this->prev = NULL;
    }
};
void insert_at_tail(Node* &head, Node* &tail, string v){
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
Node* find_s2(Node *head, string s2, Node* &cur){
    Node *tmp = head;
    while(tmp != NULL){
        if(tmp->val == s2){
            cur = tmp;
            return cur;
        }
        tmp = tmp->next;
    }
    return NULL;
}
void go_back(Node* &cur){
    if(cur == NULL){
        cout<<"Not Available"<<endl;
    }else{
    if(cur->prev == NULL){
        cout<<"Not Available"<<endl;
    }else{
        cout<<cur->prev->val<<endl;
        cur = cur->prev;
    }
    }
}
void go_forword(Node* &cur){
    if(cur == NULL){
        cout<<"Not Available"<<endl;
    }else{
    if(cur->next == NULL){
        cout<<"Not Available"<<endl;
    }else{
        cout<<cur->next->val<<endl;
        cur = cur->next;
    }
    }
}
int main(){
    Node *head = NULL;
    Node *tail = NULL;
    while(true){
        string v; cin>>v;
        if(v == "end")
            break;
        insert_at_tail(head,tail,v);
    }
    Node *cur = NULL;
    int q; cin>>q;
    cin.ignore();
    while(q--){
        string s;
        getline(cin,s);
        if(s.size() > 4){
            stringstream ss(s);
            string s1,s2;
            ss >> s1;
            ss >> s2;
            Node *check = find_s2(head,s2,cur);
            if(check == NULL){
                cout<<"Not Available"<<endl;
            }else{
                cout<<cur->val<<endl;
            }
        }else{
            if(s == "prev"){
                go_back(cur);
            }else{
                go_forword(cur);
            }
        }
    }
}