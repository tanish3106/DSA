class Solution {
public:
    ListNode* insertionSortList(ListNode* head) {
        ListNode* temp=head;
        vector<int> ans;
        while(temp!=NULL){
            ans.push_back(temp->val);
            temp = temp->next;
        }
        temp= head;
        sort(ans.begin(),ans.end());
        int n = ans.size();
        for(int i =0; i<n; i++){
            temp->val = ans[i];
            temp = temp->next;
        }
        return head;
    }
};