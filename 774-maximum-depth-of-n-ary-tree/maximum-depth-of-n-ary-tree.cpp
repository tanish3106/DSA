class Solution {
public:
    int lol(Node* root, int count) {
        if (root == nullptr) {
            return 0;
        }

        int maxcount = count;

        for (Node* child : root->children) {
            maxcount = max(maxcount, lol(child, count + 1));
        }

        return maxcount;
    }

    int maxDepth(Node* root) {
        return lol(root, 1);
    }
};