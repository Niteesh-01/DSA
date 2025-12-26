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
        stack<int> st;
        int size=0;
        ListNode* temp=head;
        while(temp){
            size++;
            temp=temp->next;
        }
        int n=size/2;
        temp=head;
        for(int i=0;i<n;i++){
            temp=temp->next;
        }
        for(int i=n;i<size;i++){
            st.push(temp->val);
            temp=temp->next;
        }
        //find max
        int mx=INT_MIN,sum=0;
        temp=head;
        for(int i=0;i<n;i++){
            sum=temp->val + st.top();
            mx=max(mx,sum);
            sum=0;
            temp=temp->next;
            st.pop();
        }
        return mx;
    }
};