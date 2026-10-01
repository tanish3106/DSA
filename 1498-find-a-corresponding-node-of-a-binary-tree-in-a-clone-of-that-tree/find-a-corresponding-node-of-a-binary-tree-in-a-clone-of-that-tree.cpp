/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
#pragma GCC optimize("Ofast")

#include <bits/stdc++.h>
using namespace std;

static constexpr size_t max_align = alignof(max_align_t);
alignas(max_align) static unsigned char BUFFER[64 * 1024 * 1024];
static size_t pos = 0;

void* operator new(const size_t size) {
    const size_t padding = (max_align - (pos % max_align)) % max_align;
    pos += padding + size;
    return static_cast<void*>(&BUFFER[pos - size]);
}

void* operator new[](const size_t size) { return operator new(size); }
void operator delete(void*) noexcept {}
void operator delete[](void*) noexcept {}
void operator delete(void*, size_t) noexcept {}
void operator delete[](void*, size_t) noexcept {}
class Solution {
public:
    Solution(){
        ios_base::sync_with_stdio(0);
        cin.tie(0);
        cout.tie(0);
    }
    void findInBT(TreeNode*cloned,TreeNode*target,TreeNode*&ptr){
          if(cloned==nullptr){
            return ;
          }
          if(cloned->val==target->val){
             ptr=cloned;
             return;
          }
          findInBT(cloned->left,target,ptr);
          findInBT(cloned->right,target,ptr);
    }
    TreeNode* getTargetCopy(TreeNode* original, TreeNode* cloned, TreeNode* target) {
        TreeNode*res=nullptr;
        findInBT(cloned,target,res);
        return res;
    }
};