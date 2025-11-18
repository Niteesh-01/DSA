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
    ListNode* deleteDuplicates(ListNode* head) {
        unordered_map<int,int> mp;
        ListNode* temp=head;
        while(temp){
            mp[temp->val]++;
            temp=temp->next;
        }
        temp=head;
        ListNode* t=new ListNode(0);
        ListNode* tempt=t;
        while(temp){
            if(mp[temp->val]==1){
                ListNode* a=new ListNode(temp->val);
                tempt->next=a;
                tempt=tempt->next;
            }
            temp=temp->next;
        }
        return t->next;
    }
        // return ans;
    //     if(head==NULL || head->next==NULL) return head;
    //     ListNode* temp=head;
    //     ListNode* temp1=head->next;
    //     ListNode* dummy=new ListNode(0);
    //     ListNode* t=dummy;
    //     while(temp1){
    //         if(temp->val!=temp1->val){
    //             ListNode* a=new ListNode(temp->val);
    //             t->next=a;
    //             temp=temp1;
    //             temp1=temp1->next;
    //             t=t->next;
    //         }
    //         else if(temp->val==temp1->val)
    //     }
    // }
};