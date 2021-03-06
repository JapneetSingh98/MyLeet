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
    ListNode* deleteDuplicates(ListNode* head) {
        if (head == NULL) {
            return NULL;
        }
        ListNode* curr = head;
        while (curr->next != NULL) {
            if (curr->next->val == curr->val) {
                ListNode* after = curr->next->next;
                delete curr->next;
                curr->next = after;
            } else {
                curr = curr->next;
            }
        }
        return head;
    }
};
