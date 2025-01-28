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
    ListNode* swapPairs(ListNode* head) {
        ListNode dummy(0, head);
        ListNode *previous = &dummy; 
        ListNode *current = head;

        while (current && current->next) {
            ListNode *npn = current->next->next;
            ListNode *second = current->next;

            second->next = current;
            current->next = npn;
            previous->next = second;

            previous = current;
            current = npn;
        }

        return dummy.next;        
    }
};