/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    // Slower
    // bool hasCycle(ListNode* head) {
    //     map<ListNode*, int> mp;
    //     ListNode* node = head;
    //     while (node != NULL) {
    //         if (mp.count(node))
    //             return true;
    //         mp[node]++;
    //         node = node->next;
    //     }
    //     return false;
    // }
    bool hasCycle(ListNode* head) {
        if (head == NULL)
            return false;
        ListNode* slow = head;
        ListNode* fast = head;
        while (fast != NULL && fast->next != NULL) {
            slow = slow->next;
            fast = fast->next->next;
            if (slow == fast)
                return true;
        }
        return false;
    }
};