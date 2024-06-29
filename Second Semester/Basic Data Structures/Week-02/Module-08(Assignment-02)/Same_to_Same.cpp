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
void insert_at_tail1(Node* &head1, Node* &tail1, int value1){
    Node *newNode = new Node(value1);
    if(head1 == NULL){
        head1 = newNode;
        tail1 = newNode;
        return;
    }
    tail1->next = newNode;
    tail1 = newNode;
    return;
}
void insert_at_tail2(Node* &head2, Node* &tail2, int value2){
    Node *newNode = new Node(value2);
    if(head2 == NULL){
        head2 = newNode;
        tail2 = newNode;
        return;
    }
    tail2->next = newNode;
    tail2 = newNode;
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
bool check_equal(Node* head1, Node* head2, bool &check){
    Node *tmp1 = head1;
    Node *tmp2 = head2;
    while(tmp1 != NULL){
        if(tmp1->val != tmp2->val){
            check = false;
            cout<<"NO"<<endl;
            return check;
        }else{
            tmp1 = tmp1->next;
            tmp2 = tmp2->next;
        }
    }
    return true;
}
int main(){
    int size_1=0,size_2=0;
    bool check = true;
    Node *head1 = NULL;
    Node *tail1 = NULL;
    Node *head2 = NULL;
    Node *tail2 = NULL;
    while(true){
        int value1; cin>>value1;
        if(value1 == -1){
            break;
        }
        insert_at_tail1(head1,tail1,value1);
    }
    size_1 = size_of_linked_list(head1);
        while(true){
        int value2; cin>>value2;
        if(value2 == -1){
            break;
        }
        insert_at_tail2(head2,tail2,value2);
    }
    size_2 = size_of_linked_list(head2);
    if(size_1 != size_2){
        cout<<"NO"<<endl;
    }else{
        bool check = check_equal(head1,head2,check);
        if(check == true){
        cout<<"YES"<<endl;
    }
    }
    return 0;
}