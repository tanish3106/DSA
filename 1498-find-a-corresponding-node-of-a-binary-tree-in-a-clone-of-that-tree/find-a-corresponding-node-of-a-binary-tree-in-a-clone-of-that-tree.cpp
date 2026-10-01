class Solution {
public:
    TreeNode* inordertraversal(TreeNode* original, TreeNode* cloned, TreeNode* target) {
        if (original == nullptr) {
            return nullptr;
        }

        if (original == target) {
            return cloned;
        }

        TreeNode* left = inordertraversal(original->left, cloned->left, target);
        if (left != nullptr) {
            return left;
        }

        return inordertraversal(original->right, cloned->right, target);
    }

    TreeNode* getTargetCopy(TreeNode* original, TreeNode* cloned, TreeNode* target) {
        return inordertraversal(original, cloned, target);
    }
};