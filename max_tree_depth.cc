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
    int maxDepth(TreeNode* root) {
        int ans1 = 1;
        int ans2 = 1;
        if (!root)
            return 0;
        if (root->left) {
            ans1 += maxDepth(root->left);
        }
        if (root->right) {
            ans2 += maxDepth(root->right);
        }
        if (ans1>ans2)
            return ans1;
        else
            return ans2;
    }
};
