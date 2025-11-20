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
    ListNode* sortList(ListNode* head) {
        ListNode* temp=head;
        vector<int> v;
        while(temp){
            v.push_back(temp->val);
            temp=temp->next;
        }
        temp=head;
        sort(v.begin(),v.end());
        ListNode* a=new ListNode(0);
        ListNode* t=a;
        for(int i=0;i<v.size();i++){
            ListNode* b=new ListNode(v[i]);
            t->next=b;
            t=t->next;
        }
        return a->next;
    }
};