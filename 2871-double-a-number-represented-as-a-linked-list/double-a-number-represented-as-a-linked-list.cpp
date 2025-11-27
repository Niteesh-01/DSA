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
    // ListNode* Reverse(ListNode* head){
    //     ListNode* pre=NULL;
    //     ListNode* Next=NULL;
    //     ListNode* curr=head;
    //     while(curr){
    //         Next=curr->next;
    //         curr->next=pre;
    //         pre=curr;
    //         curr=Next;
    //     }
    //     return pre;
    // }
    ListNode* doubleIt(ListNode* head) {
        // if(head->val==0 && head->next==nullptr) return new ListNode(0);
        // long long num=0;
        // while(head){
        //     num=num*10 + head->val;
        //     head=head->next;
        // }
        // num*=2;


        // int reverse=0;
        // while(num>0){
        //     reverse=reverse*10 + num%10;
        //     num/=10;
        // }
        // ListNode* ans=new ListNode(0);
        // ListNode* temp=ans;
        // while(num>0){
        //     int digit=num%10;
        //     ListNode* l=new ListNode(digit);
        //     temp->next=l;
        //     temp=temp->next;
        //     num/=10;
        // }
        //return Reverse(ans->next);

        if (head->val > 4)
            head = new ListNode(0, head);
        for(ListNode* node = head; node != nullptr; node = node->next) {
            node->val = (node->val * 2) % 10;
            if (node->next != nullptr && node->next->val > 4)
                node->val++;
        }
        return head;
    }
};