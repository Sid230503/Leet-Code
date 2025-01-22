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
        int length=0;
        ListNode* curr = head;
        while(curr != nullptr){
            curr=curr->next;
            length++;
        }
        length -= n;
        curr = head;
        if(length==0){
            head = head->next;
            return head;
        }
        while(length > 1){
            curr = curr -> next;
            length--;
        }curr->next = curr->next->next; 
        return head;
    }
};