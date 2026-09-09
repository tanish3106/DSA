
class Solution {
public:

    int bintonum(string binary) {
        int decimal = 0;
        int base = 1;

        for (int i = binary.size() - 1; i >= 0; i--) {
            decimal += (binary[i] - '0') * base;
            base *= 2;
        }

        return decimal;
    }

    int solve(TreeNode* root, string sum) {
        if (root == nullptr) {
            return 0;
        }

        sum.push_back(root->val + '0');

        
        if (root->left == nullptr && root->right == nullptr) {
            return bintonum(sum);
        }

        return solve(root->left, sum) + solve(root->right, sum);
    }

    int sumRootToLeaf(TreeNode* root) {
        return solve(root, "");
    }
};

