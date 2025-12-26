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
    int pairSum(ListNode* head) {
        // stack<int> st;
        // int size=0;
        // ListNode* temp=head;
        // while(temp){
        //     size++;
        //     temp=temp->next;
        // }
        // int n=size/2;
        // temp=head;
        // for(int i=0;i<n;i++){
        //     temp=temp->next;
        // }
        // for(int i=n;i<size;i++){
        //     st.push(temp->val);
        //     temp=temp->next;
        // }
        // //find max
        // int mx=INT_MIN;
        // temp=head;
        // for(int i=0;i<n;i++){
        //     mx=max(mx,temp->val + st.top());
        //     temp=temp->next;
        //     st.pop();
        // }
        // return mx;

        //two pointer approach
        vector<int> v;
        ListNode *slow=head, *fast=head;
        while(fast and fast->next){
            v.push_back(slow->val);
            slow=slow->next;
            fast=fast->next->next;
        }
        int mx=INT_MIN;
        for(int i=v.size()-1;i>=0;i--){
            mx=max(mx,v[i]+slow->val);
            slow=slow->next;
        }
        return mx;
    }
};