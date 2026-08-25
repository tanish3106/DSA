class Solution {
public:
    long long ans = LLONG_MAX;

    void solve(TreeNode* root, int minVal) {
        if (root == nullptr)
            return;

        if (root->val > minVal) {
            ans = min(ans, (long long)root->val);
            return;
        }

        solve(root->left, minVal);
        solve(root->right, minVal);
    }

    int findSecondMinimumValue(TreeNode* root) {
        if (root == nullptr)
            return -1;

        solve(root, root->val);

        return ans == LLONG_MAX ? -1 : ans;
    }
};