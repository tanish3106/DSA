class Solution {
public:
    int dfs(TreeNode* root) {
        if (root == nullptr) {
            return 0;
        }

        int sum = 0;

        if (root->left != nullptr &&
            root->left->left == nullptr &&
            root->left->right == nullptr) {
            
            sum += root->left->val;
        }

        
        sum += dfs(root->left);
        sum += dfs(root->right);

        return sum;
    }

    int sumOfLeftLeaves(TreeNode* root) {
        return dfs(root);
    }
};