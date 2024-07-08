/*
class Solution {
public:
    void insert_at_tail(ListNode* &head2, ListNode* &tail2, int value){
    ListNode *newNode = new ListNode(value);
    if(head2 == NULL){
        head2 = newNode;
        tail2 = newNode;
        return;
    }
    tail2->next = newNode;
    tail2 = newNode;
    return;
    }
    void copy_linked_list(ListNode *head, ListNode* &head2, ListNode* &tail2){
        ListNode *tmp = head;
        while(tmp != NULL){
            insert_at_tail(head2,tail2,tmp->val);
            tmp = tmp->next;
        }
    }
    void reverse_copyed_linked_list(ListNode* &head2, ListNode *cur){
        if(cur->next == NULL){
            head2 = cur;
            return;
        }
        reverse_copyed_linked_list(head2,cur->next);
        cur->next->next = cur;
        cur->next = NULL;
    }
    bool check_palindrome(ListNode *head, ListNode *head2){
        ListNode *tmp = head;
        ListNode *tmp2 = head2;
        while(tmp != NULL){
            if(tmp->val != tmp2->val){
                return false;
            }
            tmp = tmp->next;
            tmp2 = tmp2->next;
        }
        return true;
    }
    bool isPalindrome(ListNode* head){
        ListNode *head2 = NULL;
        ListNode *tail2 = NULL;
        copy_linked_list(head,head2,tail2);
        reverse_copyed_linked_list(head2,head2);
        bool c = check_palindrome(head,head2);
        if(c == true)
            return true;
        else
            return false;
    }
};
*/