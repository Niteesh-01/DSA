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
    ListNode* swapPairs(ListNode* head) {
        if(head==NULL || head->next==NULL) return head;
        ListNode* curr=head->next;
        ListNode* pre=head;
        while(curr){
                int a=curr->val;
                int b=pre->val;
                pre->val=a;
                curr->val=b;
            if(curr->next && curr->next->next){
                pre=curr->next;
                curr=pre->next;
            }
            else return head;
        }
        return head;
    }
};