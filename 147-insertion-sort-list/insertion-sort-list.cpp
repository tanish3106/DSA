class Solution {
public:
    void swapVal(ListNode* a, ListNode* b) {
        int temp = a->val;
        a->val = b->val;
        b->val = temp;
    }

    ListNode* insertionSortList(ListNode* head) {
        if (head == nullptr)
            return head;

        ListNode* temp2 = head->next;

        while (temp2 != nullptr) {
            ListNode* temp1 = head;

            while (temp1 != temp2) {
                if (temp1->val > temp2->val) {
                    swapVal(temp1, temp2);
                }

                temp1 = temp1->next;
            }

            temp2 = temp2->next;
        }

        return head;
    }
};