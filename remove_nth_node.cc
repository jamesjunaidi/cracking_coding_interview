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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        if (head->next == nullptr) {
            return nullptr;
        }
        ListNode* temp = head;
        ListNode* h = head;
        int i = 0;
        while (temp->next && i != n) {
            temp = temp->next;
            i++;
        }
        if (i != n) {
            head = head->next;
            return head;
        }
        while (temp->next) {
            temp = temp->next;
            h = h->next;
        }
        //h->val = h->next->val;
        h->next = h->next->next;
        return head;
    }
};
