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
    ListNode* deleteMiddle(ListNode* head) {
        if(head==NULL || head->next==NULL) return NULL;
        // ListNode* t=head;
        // int size=0;
        // while(t){
        //     t=t->next;
        //     size++;
        // }
        // t=head;
        // for(int i=0;i<size/2-1;i++){
        //     t=t->next;
        // }
        // t->next=t->next->next;
        // return head;

        //more optimized i.e in 1 traversal
        ListNode* slow=head;
        ListNode* fast=head;
        ListNode* pre=NULL;
        while(fast && fast->next){
            pre=slow;
            slow=slow->next;
            fast=fast->next->next;
        }
        pre->next=slow->next;
        return head;
    }
};