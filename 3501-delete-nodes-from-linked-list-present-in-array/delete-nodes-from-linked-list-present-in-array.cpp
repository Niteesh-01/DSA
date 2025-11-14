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
    ListNode* modifiedList(vector<int>& nums, ListNode* head) {
        unordered_set<int> s;
        for(int i=0;i<nums.size();i++){
            s.insert(nums[i]);
        }
        ListNode* a=new ListNode(0);
        ListNode* t=a;
        ListNode* temp=head;
        while(temp){
            if(s.find(temp->val)==s.end()) {
                ListNode* n=new ListNode(temp->val);
                t->next=n;
                t=t->next;
            }
            temp=temp->next;
        }
        return a->next;
    }
};