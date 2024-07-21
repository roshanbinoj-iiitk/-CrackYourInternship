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
    ListNode* removeElements(ListNode* head, int val) {
        ios_base::sync_with_stdio(false);
        cin.tie(0);
        cout.tie(0);

        ListNode* dum = new ListNode(0);
        dum->next = head;

        ListNode* curr = dum;

        while(curr->next!=NULL) {
            if(curr->next->val == val)
            {
                curr->next = curr->next->next;
            }
            else{
                curr = curr->next;
            }
        }

        return dum->next;
    }
};