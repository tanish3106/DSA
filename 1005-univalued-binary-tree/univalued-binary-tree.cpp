class Solution {
public:
    bool inorder(TreeNode* root, int value) {
        if (root == nullptr)
            return true;

        if (root->val != value)
            return false;

        return inorder(root->left, value) &&
               inorder(root->right, value);
    }

    bool isUnivalTree(TreeNode* root) {
        if (root == nullptr)
            return true;

        return inorder(root, root->val);
    }
};