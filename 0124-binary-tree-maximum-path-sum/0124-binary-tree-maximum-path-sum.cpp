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
private:
    int maxi = INT_MIN;

public:
    int maxPathSum(TreeNode* root) {
        helper(root);
        return maxi;
    }
    
private:
    int helper(TreeNode* node) {
        if (node == nullptr) {
            return 0;
        }
        int left = std::max(helper(node->left), 0);
        int right = std::max(helper(node->right), 0);
        maxi = std::max(maxi, node->val + left + right);
        return std::max(left, right) + node->val;
    }
};
