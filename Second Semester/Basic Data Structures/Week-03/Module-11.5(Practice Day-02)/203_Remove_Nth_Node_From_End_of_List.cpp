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
    void delete_head(ListNode* &head){
        ListNode *dN = head;
        if(head->next == NULL){
            head = NULL;
        }else{
            head = head->next;
        }
        delete dN;
        return;
    }
    ListNode* removeElements(ListNode* head, int val) {
         while (head != NULL && head->val == val) {
            delete_head(head);
        }
        ListNode *tmp = head;
        while(tmp != NULL && tmp->next != NULL){
            if(tmp->next->val == val){
                ListNode *dN = tmp->next;
                if(tmp->next->next == NULL){
                    //delete_tail
                    tmp->next = NULL;
                    delete dN;
                }else{
                    //delete_at_position
                    tmp->next = tmp->next->next;
                    delete dN;
                }
            }else{
                tmp = tmp->next;
            }
        }
        return head;
    }
};
*/