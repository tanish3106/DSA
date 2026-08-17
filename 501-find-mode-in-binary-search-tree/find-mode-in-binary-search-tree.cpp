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
    vector<int>ans;
    int prev=0;
    int curcount=0;
    int maxcount=0;
    bool first=true;
    void inorder(TreeNode* root){
        if(!root){
            return;
        }
        inorder(root->left);
        if(first|| root->val!=prev){
            curcount=1;
            first=false;
        }
        else{
            curcount++;
        }
        if(curcount>maxcount){
            maxcount=curcount;
            ans.clear();
            ans.push_back(root->val);
        }
        else if(curcount==maxcount){
            ans.push_back(root->val);
        }
        prev=root->val;
        inorder(root->right);
    }
    vector<int> findMode(TreeNode* root) {
        inorder(root);
        return ans;
    }
};