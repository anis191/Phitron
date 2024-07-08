/*
class Solution {
public:
    void reverse_linked_list(ListNode* &head, ListNode *cur){
        if(cur->next == NULL){
            head = cur;
            return;
        }
        reverse_linked_list(head,cur->next);
        cur->next->next = cur;
        cur->next = NULL;
    }
    ListNode* reverseList(ListNode* head) {
        if(head == NULL){
            return NULL;
        }
        reverse_linked_list(head,head);
        return head;
    }
};
*/