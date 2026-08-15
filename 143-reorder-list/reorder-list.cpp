/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    void reorderList(ListNode* head) {
        deque<ListNode*>dq;
        ListNode*temp=head;
        while(temp!=nullptr){
            dq.push_back(temp);
            temp=temp->next;
        }
      ListNode*curr=head;
      dq.pop_front();
      while(!dq.empty()){
        ListNode*back=dq.back();
        dq.pop_back();
        curr->next=back;
        curr=curr->next;
        if(!dq.empty()){
            ListNode*front=dq.front();
            dq.pop_front();
            curr->next=front;
            curr=curr->next;
        }
      }
        curr->next=nullptr;
        
    }
};