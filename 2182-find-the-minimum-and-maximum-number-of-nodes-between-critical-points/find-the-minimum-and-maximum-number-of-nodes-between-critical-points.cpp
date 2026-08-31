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
    vector<int> nodesBetweenCriticalPoints(ListNode* head) {
        vector<int> ans(2,-1);
        if(!head || !head->next || !head->next->next) return ans;

        int pre_crit=0,first_crit=0;
        ListNode *pre=head,*curr=head->next;
        int i=1,min_dist=INT_MAX;
        while(curr->next){
            if(curr->val > pre->val && curr->val > curr->next->val){
                if(first_crit==0) first_crit=i;
                if(pre_crit==0) pre_crit=i;
                else{
                    min_dist=min(min_dist,i-pre_crit);
                    pre_crit=i;
                }
            }
            else if(curr->val < pre->val && curr->val < curr->next->val){
                if(first_crit==0) first_crit=i;
                if(pre_crit==0) pre_crit=i;
                else{
                    min_dist=min(min_dist,i-pre_crit);
                    pre_crit=i;
                }
            }

            i++;
            pre=curr;
            curr=curr->next;
        }

        int max_dist=pre_crit-first_crit;
        if(min_dist!=INT_MAX){
            ans[0]=min_dist;
            ans[1]=max_dist;
        }

        return ans;

    }
};