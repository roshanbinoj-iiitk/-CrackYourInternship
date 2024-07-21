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
    ListNode* middleNode(ListNode* head) {
        ListNode* node = head;
        node = head;
        int c = 1;
        while(node->next!=NULL)
        {
            node = node->next;
            c++;
        }
        int m = floor(c/2);
        node = head;
        while(m--)
        {
            node=node->next;
        }
        return node;
    }
};