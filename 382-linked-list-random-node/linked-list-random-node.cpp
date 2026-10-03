class Solution {
public:
    ListNode* head;

    Solution(ListNode* head) {
        this->head = head;
    }

    int getRandom() {
        ListNode* curr = head;
        int ans = 0;
        int count = 1;

        while (curr != nullptr) {
            
            if (rand() % count == 0) {
                ans = curr->val;
            }

            curr = curr->next;
            count++;
        }

        return ans;
    }
};