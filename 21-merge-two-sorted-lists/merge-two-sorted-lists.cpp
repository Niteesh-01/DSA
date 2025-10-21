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
    ListNode* mergeTwoLists(ListNode* a, ListNode* b) {
        ListNode* tempA=a;
        ListNode* tempB=b;
        ListNode* c=new ListNode(100);
        ListNode* tempC=c;
        // while(tempA!=NULL && tempB!=NULL){ //this logic takes O(m+n) space complexity
        //     if(tempA->val<=tempB->val){
        //         tempC->next=tempA;
        //         tempA=tempA->next;
        //     }
        //     else{
        //         tempC->next=tempB;
        //         tempB=tempB->next;
        //     }
        //     tempC=tempC->next;
        // }
        // if(tempA==NULL) tempC->next=tempB;
        // else if(tempB==NULL) tempC->next=tempA;
        // return c->next;

        //O(1) solution 
        while(a!=NULL && b!=NULL){
            if(a->val<=b->val){
                tempC->next=a; //a or tempA
                a=a->next;
                tempC=tempC->next;
            }
            else{
                tempC->next=b;
                b=b->next;
                tempC=tempC->next;
            }
        }
        if(a==NULL) tempC->next=b;
        else if(b==NULL) tempC->next=a;
        return c->next;
    }
};