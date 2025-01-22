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
        // int length=0;
        // ListNode* curr = head;
        // while(curr != nullptr){
        //     curr=curr->next;
        //     length++;
        // }
        // length -= n;
        // curr = head;
        // if(length==0){
        //     head = head->next;
        //     return head;
        // }
        // while(length > 1){
        //     curr = curr -> next;
        //     length--;
        // }curr->next = curr->next->next; 
        ListNode* slow=head;
        ListNode* fast=head;
        for(int i = 0; i<n; i++){
            if(fast == NULL) return head;
            fast = fast->next;
        }
        if(fast == NULL) return head->next;
        while(fast-> next != NULL){
            slow=slow->next;
            fast= fast->next;
        }if(slow->next != NULL) slow->next = slow->next->next;
        return head;
    }
};