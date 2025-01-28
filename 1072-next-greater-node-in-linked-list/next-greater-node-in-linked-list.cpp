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
    void solve(vector<int> &ans) {
        stack<int> s;
        int n = ans.size();

        for (int i = n - 1; i >= 0; --i) {
            int element = ans[i];
            while(!s.empty() && s.top() <= element) {
                s.pop();
            }
            if (s.empty()) {
                s.push(element);
                ans[i] = 0;
            }
            if (s.top() > element) {
                ans[i] = s.top();
                s.push(element);
            }
        }
        return;
    }

    vector<int> nextLargerNodes(ListNode* head) {
        vector<int> ans;
        ListNode* temp = head;
        while(temp) {
            ans.push_back(temp->val);
            temp = temp->next;
        }
        solve(ans);

        return ans;
    }
};