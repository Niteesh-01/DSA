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
    ListNode* partition(ListNode* head, int x) {
        ListNode* lo=new ListNode(0);
        ListNode* hi=new ListNode(0);
        ListNode* temp=head;
        ListNode* tl=lo;
        ListNode* th=hi;
        while(temp!=NULL){
            if(temp->val < x){
                tl->next=temp;
                tl=tl->next;
            }
            else{
                th->next=temp;
                th=th->next;
            }
            temp=temp->next;
        }
        //tl->next=NULL;
        th->next=NULL;
        tl->next=hi->next;
    return lo->next;
    }
};