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
// #include <vector>
// #include <queue>

// using namespace std;

// class Solution {
// public:
// struct TreeNode {
//     int val;
//     TreeNode* left;
//     TreeNode* right;
//     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
// };
//     vector<int> levelOrder(TreeNode* root) {
//         vector<int> result;
//         if (!root) return result;
        
//         queue<TreeNode*> q;
//         q.push(root);
        
//         while (!q.empty()) {
//             TreeNode* node = q.front();
//             q.pop();
            
//             if (node) {
//                 result.push_back(node->val);
//                 q.push(node->left);
//                 q.push(node->right);
//             } else {
//                 result.push_back(-1);  // Representing NULL nodes for structure comparison
//             }
//         }
        
//         return result;
//     }

//     bool isSameTree(TreeNode* p, TreeNode* q) {
//         return levelOrder(p) == levelOrder(q);
//     }
// };

//  class Solution {
//  public:
//     bool isSameTree(TreeNode* p, TreeNode* q) {

//     }
//  };
class Solution {
public:
    vector<int> levelOrder(TreeNode* root) {
        vector<int> result;
        if (!root) return result;
        
        queue<TreeNode*> q;
        q.push(root);
        
        while (!q.empty()) {
            TreeNode* node = q.front();
            q.pop();
            
            if (node) {
                result.push_back(node->val);
                q.push(node->left);
                q.push(node->right);
            } else {
                result.push_back(INT_MIN);  // Represent NULL nodes to maintain structure
            }
        }
        
        return result;
    }

    bool isSameTree(TreeNode* p, TreeNode* q) {
        return levelOrder(p) == levelOrder(q);
    }
};

