class Solution {
public:
    Node* connect(Node* root) {
        Node* curr = root;

        while (curr) {
            Node* nextHead = nullptr;
            Node* prev = nullptr;

            while (curr) {
                if (curr->left) {
                    if (!nextHead)
                        nextHead = curr->left;

                    if (prev)
                        prev->next = curr->left;

                    prev = curr->left;
                }

                if (curr->right) {
                    if (!nextHead)
                        nextHead = curr->right;

                    if (prev)
                        prev->next = curr->right;

                    prev = curr->right;
                }

                curr = curr->next;
            }

            curr = nextHead;
        }

        return root;
    }
};