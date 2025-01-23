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
    ListNode* reverseList(ListNode* head){
        ListNode* prev = NULL;
        ListNode* curr = head;
        ListNode* temp;
        while (curr) {
            temp = curr->next;
            curr -> next = prev;
            prev = curr;
            curr = temp;
        }return prev;
    }
    bool isPalindrome(ListNode* head) {
        if(!head || !head->next) return true;
        ListNode* slow = head;
        ListNode* fast = head;
        while(fast->next != nullptr && fast->next->next != nullptr){
            fast= fast->next->next;
            slow= slow->next;
        }slow= reverseList(slow->next);
        while(slow){
            if(head->val != slow->val) return false;
            slow =slow->next;
            head = head->next;
        }return true;
    // vector<int> arr;
    // ListNode* curr = head;

    // // Store linked list values in arr
    // while (curr != nullptr) {
    //     arr.push_back(curr->val);
    //     curr = curr->next;
    // }

    // // Create a copy and reverse it
    // vector<int> revarr = arr;
    // reverse(revarr.begin(), revarr.end());

    // // Compare original and reversed arrays
    // return arr == revarr;
        

    }
};