/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    void preO(TreeNode* root, vector<int>& preorder) {
        if(root == NULL) return;
        preorder.push_back(root->val);
        preO(root->left, preorder);
        preO(root->right, preorder);
    }

    vector<int> preorderTraversal(TreeNode* root) {
        vector<int> preorder;
        preO(root, preorder);
        return preorder;
    }
};