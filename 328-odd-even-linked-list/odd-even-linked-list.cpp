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
    ListNode* oddEvenList(ListNode* head) {
        ListNode* odd=new ListNode(0);
        ListNode* even=new ListNode(0);
        ListNode* otemp=odd;
        ListNode* etemp=even;
        ListNode* temp1=head;
        //ListNode* temp2=head->next;
        while(temp1!=NULL){
            otemp->next=temp1;
            otemp=otemp->next;
            if(temp1->next==NULL) break;
            temp1=temp1->next;
            etemp->next=temp1;
            etemp=etemp->next;
            temp1=temp1->next;
        }
        otemp->next=even->next;
        etemp->next=NULL;
    return odd->next;
    }
};