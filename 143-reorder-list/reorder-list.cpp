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
    ListNode* reverseList(ListNode* head){
        if(head==NULL || head->next==NULL) return head;
        ListNode* nh=reverseList(head->next);
        head->next->next=head;
        head->next=NULL;
        return nh;
    }
    void reorderList(ListNode* head) {
        ListNode *slow=head,*fast=head;
        while(fast->next!=NULL && fast->next->next!=NULL){
            slow=slow->next;
            fast=fast->next->next;
        }
        ListNode* nh=reverseList(slow->next);
        slow->next=NULL;
        ListNode *a=head,*b=nh;
        ListNode* c=new ListNode(0);
        ListNode* tempc=c;
        while(a || b){
            tempc->next=a;
            tempc=tempc->next;
            a=a->next;
            tempc->next=b;
            tempc=tempc->next;
            if(b) b=b->next;
        }
        head=c->next;
    }
};