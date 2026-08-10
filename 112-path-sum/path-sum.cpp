
class Solution {
public:
    bool dfs(TreeNode* root, int targetSum) {

        // Empty node
        if (root == nullptr) {
            return false;
        }

        // If this is a leaf, check whether
        // the remaining sum equals the node value
        if (root->left == nullptr && root->right == nullptr) {
            return targetSum == root->val;
        }

        // Check left and right subtree
        return dfs(root->left, targetSum - root->val) ||
               dfs(root->right, targetSum - root->val);
    return dfs(root->left, targetSum - root->val) || dfs(root->right, targetSum - root->val); }

    bool hasPathSum(TreeNode* root, int targetSum) {
        return dfs(root, targetSum);
    }
};

