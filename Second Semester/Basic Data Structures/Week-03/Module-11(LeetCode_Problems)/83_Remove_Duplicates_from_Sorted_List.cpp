/*
class Solution {
public:
    ListNode* remove_duplicated(ListNode* &head,ListNode* n){
        if(n==NULL || n->next==NULL){
            return head;
        }
        if(n->val == n->next->val){
            ListNode *tmp = n->next;
            n->next = tmp->next;
            delete tmp;
            return remove_duplicated(head,n);
        }else{
            return remove_duplicated(head,n->next);
        }
    }
    ListNode* deleteDuplicates(ListNode* head){
        return remove_duplicated(head,head);
    }
};
*/