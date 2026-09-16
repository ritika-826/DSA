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
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        ListNode* dummy=new ListNode(-1);
        dummy->next=head;
        if(head==NULL || head->next==NULL){
            return head;
        }
        ListNode* prev=dummy;
        for(int i=1;i<left;i++){
         prev=prev->next;
        }
        ListNode* curr=prev->next;
        for(int i=1;i<=abs(left-right);i++){
        ListNode* temp=prev->next;
        prev->next=curr->next;
        curr->next=curr->next->next;
        prev->next->next=temp;
        }
        return dummy->next;
    }
};