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
    int getDecimalValue(ListNode* head) {
        if (head==NULL) return 0;
        string str="";
        ListNode* temp=head;
        while(temp){
            char ch=temp->val;
            str=str+ch;
            temp=temp->next;
        }
        int num=0 ,x=1;
        for(int i=str.length()-1;i>=0;i--){
            num+=str[i]*x;
            x*=2;
        }
        return num;
    }
};