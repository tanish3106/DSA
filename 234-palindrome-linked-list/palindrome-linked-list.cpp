class Solution {
public:
    bool isPalindrome(ListNode* head) {
        stack<ListNode*> st;
        ListNode* temp = head;

        while (temp != nullptr) {
            st.push(temp);
            temp = temp->next;
        }

        temp = head;

        while (temp != nullptr) {
            if (st.top()->val != temp->val)
                return false;

            st.pop();
            temp = temp->next;
        }

        return true;
    }
};