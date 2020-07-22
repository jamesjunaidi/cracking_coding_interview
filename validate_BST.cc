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
    int buf = -100000;
    bool solve(TreeNode* root, int low, int high) {
        bool ans = true;
        if (root == nullptr)
            return true;
        if (low != buf && root->val <= low)
            return false;
        if (high != buf && root->val >= high)
            return false;
        if (root->left)
            ans = ans && solve(root->left, low, root->val);
        if (root->right)
            ans = ans && solve(root->right, root->val, high);
        
        return ans;
    }
    
    bool isValidBST(TreeNode* root) {
        return solve(root, buf, buf);
    }
};
