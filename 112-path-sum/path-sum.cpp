
class Solution {
public:
    bool dfs(TreeNode* root, int targetSum) {
        if(root==nullptr){
            return false;
        }
        if(root->left==nullptr &&root->right==nullptr && targetSum==root->val){
            return true;
        }
        bool b1 =dfs(root->left,targetSum-(root->val));
        bool b2=dfs(root->right,targetSum-(root->val));
        return b1 || b2;
    }

    bool hasPathSum(TreeNode* root, int targetSum) {
        return dfs(root, targetSum);
    }
};

