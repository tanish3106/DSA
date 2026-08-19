class Solution {
public:
    int difference = INT_MAX;
    TreeNode* prev = nullptr;

    void dfs(TreeNode* root) {
        if (root == nullptr) {
            return;
        }

        dfs(root->left);

        if (prev != nullptr) {
            difference = min(difference, root->val - prev->val);
        }

        prev = root;

        dfs(root->right);
    }

    int getMinimumDifference(TreeNode* root) {
        dfs(root);
        return difference;
    }
};