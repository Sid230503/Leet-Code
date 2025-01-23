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
    bool isPalindrome(ListNode* head) {
    vector<int> arr;
    ListNode* curr = head;

    // Store linked list values in arr
    while (curr != nullptr) {
        arr.push_back(curr->val);
        curr = curr->next;
    }

    // Create a copy and reverse it
    vector<int> revarr = arr;
    reverse(revarr.begin(), revarr.end());

    // Compare original and reversed arrays
    return arr == revarr;
        

    }
};