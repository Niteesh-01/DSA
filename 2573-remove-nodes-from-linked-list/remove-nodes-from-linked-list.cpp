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
    ListNode *reverseList(ListNode *head){
        ListNode *prev=NULL,*curr=head,*next=NULL;
        while(curr!=NULL){
            next=curr->next;
            curr->next=prev;
            prev=curr;
            curr=next;
        }
        return prev;
    }

    ListNode* removeNodes(ListNode* head) {
        // stack<ListNode*> st;
        // ListNode *temp=head;
        // while(temp){
        //     while( st.size()>0 && (temp->val)>(st.top()->val) ){
        //         st.pop();
        //     }
        //     st.push(temp);
        //     temp=temp->next;
        // }
        // ListNode* newhead=NULL;
        // while(st.size()>0){
        //     st.top()->next=newhead;
        //     newhead=st.top();
        //     st.pop();
        // }
        // return newhead;

        //using next greater ele approach
        head=reverseList(head);
        ListNode *temp=head;
        while(temp!=NULL && temp->next!=NULL){
            if(temp->val > temp->next->val)
                temp->next=temp->next->next;
            else
                temp=temp->next;
        }
        return reverseList(head);
    }
};