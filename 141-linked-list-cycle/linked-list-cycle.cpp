/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    bool hasCycle(ListNode *head) {
        if(head==NULL) return false;
       ListNode* slow=head;
       ListNode* fast=head;
       while(fast!=NULL && fast->next!=NULL){
            slow=slow->next;
            fast=fast->next->next;
            if(slow==fast){
                return true;
            }
       }
       return false;
        // unordered_set<ListNode*> s;
        // ListNode* temp=head;
        // while(temp!=NULL){
        //     if(s.find(temp)==s.end()){
        //         s.insert(temp);
        //         temp=temp->next;
        //     }
        //     else return true;
        // } 
        // return false; 
    }
};