class Solution {
public:
    TreeNode* sortedListToBST(ListNode* head) {
        if (head == nullptr) {
            return nullptr;
        }

        if (head->next == nullptr) {
            return new TreeNode(head->val);
        }

        ListNode* slow = head;
        ListNode* fast = head;
        ListNode* mid = nullptr;

        while (fast != nullptr && fast->next != nullptr) {
            mid = slow;
            slow = slow->next;
            fast = fast->next->next;
        }

        // slow is the middle node
        TreeNode* node = new TreeNode(slow->val);

        // Cut the list before the middle node
        mid->next = nullptr;

        node->left = sortedListToBST(head);
        node->right = sortedListToBST(slow->next);

        return node;
    }
};