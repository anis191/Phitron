/*
class Solution {
public:
    bool hasCycle(ListNode *head) {
        ListNode *slow = head;
        ListNode *fast = head;
        bool no = false;
        while(fast != NULL && fast->next != NULL){
            slow = slow->next;
            fast = fast->next->next;
            if(fast == slow){
                no = true;
                break;
            }
        }
        if(no == true)
            return true;
        else
            return false;
    }
};
*/