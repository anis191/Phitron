/*
class Solution {
public:
    void deleteNode(ListNode* node) {
        ListNode *deleteNode = node->next;
        node->val = node->next->val;
        node->next = node->next->next;
        delete deleteNode;
        return;
    }
};
*/