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
class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        if (head == NULL)
            return head;
        ListNode* prev = head;
        ListNode* node = prev->next;

        while (node != NULL) {
            if (prev->val == node->val) {
                prev->next = node->next;
            } else {
                prev = prev->next;
            }
            node = prev->next;
        }
        return head;
    }
};