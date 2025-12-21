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
        if(head==NULL) return head;
        ListNode* prev=NULL;
        ListNode* curr=head;
        ListNode* Next=NULL;
        while(curr){
            Next=curr->next;
            curr->next=prev;
            prev=curr;
            curr=Next;
        }
        return prev;
    }
    vector<int> nextLargerNodes(ListNode* head) {
        vector<int> ans;
        stack<int> st;
        ListNode* temp=Reverse(head);
        while(temp){
            while(st.size()>0 && st.top()<=temp->val){
                st.pop();
            }
            if(st.size()==0) ans.push_back(0);
            else ans.push_back(st.top());
            st.push(temp->val);
            temp=temp->next;
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};