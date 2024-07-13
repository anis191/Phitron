/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
/*
class Solution {
public:
    void delete_from_position(ListNode *head, int pos){
    ListNode *temp = head;
    for(int i=1; i<=pos-1; i++){
        temp = temp->next;
    }
    ListNode *deleteNode = temp->next;
    temp->next = temp->next->next;
    delete deleteNode;
    }
    int size(ListNode *head){
    ListNode *tmp = head;
    int count = 0;
    while(tmp != NULL){
        count++;
        tmp = tmp->next;
    }
    return count;
    }
    void delete_head(ListNode* &head){
        ListNode *deleteNode = head;
        if(head->next == NULL){
            head = NULL;
        }else{
            head = head->next;
        }
        delete deleteNode;
        return;
    }
    void delete_tail(ListNode* &head){
        ListNode *tmp = head;
        while(tmp->next->next != NULL){
            tmp = tmp->next;
        }
        ListNode *deleteNode = tmp->next;
        tmp->next = NULL;
        delete deleteNode;
        return;
    }
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        int pos = size(head)-n;
        if(pos == 0){
            delete_head(head);
        }else if(pos == size(head)-1){
            delete_tail(head);
        }else{
            delete_from_position(head,pos);
        }
        return head;
    }
};
*/