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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        //first find the length of list 
        ListNode* temp=head;
        int len=0;
        while(temp!=NULL){
            len++;
            temp=temp->next;
        }
        if(n==len){
            head=head->next;
            return head;
        }
        //nth from end =(len-n+1)th from start
        ListNode* t=head; //jise remove krna uske 1 pahle tk traverse kro t ko
        for(int i=1;i<len-n;i++){
            t=t->next;
        }
        t->next=t->next->next;
        return head;
    }
};