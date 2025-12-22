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

    ListNode* Reverse(ListNode* head){
        ListNode *pre=NULL, *curr=head, *Next=NULL;
        while(curr){
            Next=curr->next;
            curr->next=pre;
            pre=curr;
            curr=Next;
        }
        return pre;
    }

    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        if(l1->next==NULL && l1->val==0 && l2->next==NULL && l2->val==0) return l1;
        stack<int> st1;
        ListNode* temp1=l1;
        while(temp1){
            st1.push(temp1->val);
            temp1=temp1->next;
        }
        stack<int> st2;
        ListNode* temp2=l2;
        while(temp2){
            st2.push(temp2->val);
            temp2=temp2->next;
        }
        ListNode* ans=new ListNode(0);
        ListNode* temp=ans;
        int carry=0,sum=0;
        while(st1.size()>0 && st2.size()>0){
            sum=st1.top()+st2.top()+carry;
            if(sum>=10){
                ListNode* d=new ListNode(sum%10);
                temp->next=d;
                carry=1;
            }
            else{
                ListNode* a=new ListNode(sum);
                temp->next=a;
                carry=0;
            }
            temp=temp->next;
            st1.pop();
            st2.pop();
        }

        if(st1.size()==0){
            while(st2.size()>0){
                sum=st2.top()+carry;
                temp->next=new ListNode(sum%10);
                temp=temp->next;
                st2.pop();
                carry=sum/10;
            }
        }
        else{
            while(st1.size()>0){
                sum=st1.top()+carry;
                temp->next=new ListNode(sum%10);
                temp=temp->next;
                st1.pop();
                carry=sum/10;
            }
        }
        if(carry) temp->next=new ListNode(carry);
        ListNode* final=Reverse(ans->next);
        return final;
    }
};