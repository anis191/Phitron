/*
class Solution {
public:
    int size(ListNode *head){
        int count=0;
        ListNode *tmp = head;
        while(tmp != NULL){
            count++;
            tmp = tmp->next;
        }
        return count;
    }
    ListNode* middleNode(ListNode* head) {
        ListNode *tmp = head;
       int s = size(head);
       if(s % 2 == 0){
        int pos1 = s/2;
        int pos2 = pos1 + 1;
        for(int i=1; i<=pos1-1; i++){
            tmp = tmp->next;
        }
        return tmp->next;
       }else{
        int pos = ceill(s/2);
        for(int i=1; i<=pos; i++){
            tmp = tmp->next;
        }
        return tmp;
       }
    }
};
*/