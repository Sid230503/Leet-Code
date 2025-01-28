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
    int numComponents(ListNode* head, vector<int>& G) {
        unordered_set<int> Gset(G.begin(), G.end());
        ListNode* cur = head;
        int ans = 0;

        while (cur) {
            if (Gset.count(cur->val) && (!cur->next || !Gset.count(cur->next->val)))
                ans++;
            cur = cur->next;
        }

        return ans;
    }
};