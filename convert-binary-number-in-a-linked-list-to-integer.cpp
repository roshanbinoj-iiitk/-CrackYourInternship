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
    int getDecimalValue(ListNode* head) {
        ListNode* node = head;
        string bin = "";
        while(node != NULL) {
            bin += to_string(node->val);
            node = node->next;
        }
        return std::stoi(bin, nullptr, 2);
    }
};
