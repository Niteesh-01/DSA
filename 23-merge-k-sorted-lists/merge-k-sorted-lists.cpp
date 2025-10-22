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
    //function to merge two lists
    ListNode* merge(ListNode* a, ListNode* b) {
        ListNode* tempA=a;
        ListNode* tempB=b;
        ListNode* c=new ListNode(100);
        ListNode* tempC=c;
         while(a!=NULL && b!=NULL){
            if(a->val<=b->val){
                tempC->next=a; 
                a=a->next;
                tempC=tempC->next;
            }
            else{
                tempC->next=b;
                b=b->next;
                tempC=tempC->next;
            }
        }
        if(a==NULL) tempC->next=b;
        else if(b==NULL) tempC->next=a;
        return c->next;
    }
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        if(lists.size()==0) return NULL;
        while(lists.size()>1){
            ListNode* a=lists[lists.size()-1];
            lists.pop_back();
            ListNode* b=lists[lists.size()-1];
            lists.pop_back();
            ListNode* c=merge(a,b);
            lists.push_back(c);
        }
        return lists[0];
    }
};