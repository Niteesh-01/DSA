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
    // ListNode* getNodeAt(ListNode* head,int idx){
    //     for(int i=0;i<idx;i++){
    //         head=head->next;
    //     }
    //     return head;
    // } time limit exceed
    ListNode* reverseList(ListNode* head){
        ListNode* pre=NULL;
        ListNode* Next=NULL;
        ListNode* curr=head;
        while(curr){
            Next=curr->next;
            curr->next=pre;
            pre=curr;
            curr=Next;
        }
        return pre;
    }
    bool isPalindrome(ListNode* head) {
        // ListNode* temp=head;
        // int n=0;
        // while(temp){
        //     n++;
        //     temp=temp->next;
        // }
        // int i=0,j=n-1;
        // while(i<j){
        //     ListNode* left=getNodeAt(head,i);
        //     ListNode* right=getNodeAt(head,j);
        //     if(left->val!=right->val) return false;
        //     i++;
        //     j--;
        // }
        // return true; 

        //2nd approach create a new listnode with same values as in this nodelist
    //     ListNode* copy=new ListNode(0); //farzy node
    //     ListNode* temp=head;
    //     ListNode* tempc=copy;
    //     while(temp){
    //         ListNode* node=new ListNode(temp->val);
    //         tempc->next=node;
    //         temp=temp->next;
    //         tempc=tempc->next;
    //     }
    //     copy=copy->next;
    //     temp=head;
    //     copy=reverseList(copy);
    //     tempc=copy;
    //     while(temp){
    //         if(temp->val!=tempc->val) return false;
    //         temp=temp->next;
    //         tempc=tempc->next;
    //     }
    // return true;

    //3rd approach
    //i.e first half of the list = second half of the list
        ListNode *slow=head , *fast=head;
        while(fast->next!=NULL && fast->next->next!=NULL){
            slow=slow->next;
            fast=fast->next->next;  
        }
        //now slow is at left middle/middle of the list so reverse the second half of the list now
        ListNode* nh=reverseList(slow->next);
        slow->next=nh;
        ListNode *a=head, *b=nh;
        while(b){
            if(a->val!=b->val) return false;
            a=a->next;
            b=b->next;
        }
        return true;
    }
};