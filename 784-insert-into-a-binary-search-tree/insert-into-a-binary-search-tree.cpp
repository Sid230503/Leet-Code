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
    TreeNode* insertIntoBST(TreeNode* root, int val) {
        // Base Case: If root is NULL, create a new node and return it
        if (root == NULL) {
            return new TreeNode(val);
        }

        // If value is greater than root, insert in right subtree
        if (val > root->val) {
            root->right = insertIntoBST(root->right, val);
        } 
        // Otherwise, insert in left subtree
        else {
            root->left = insertIntoBST(root->left, val);
        }

        return root;
    }
};
