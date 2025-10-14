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
    ListNode* rotateRight(ListNode* head, int k) {
        if(head==NULL || head->next==NULL) return head; 
        ListNode* temp=head; //temp ko last ke jitne rotate krne h unse 1 pahle laoo i.e traverse temp n-k times
        ListNode* tail=NULL; //traverse it to last node i.e tail
        int n=0; //size
        while(temp!=NULL){
            n++;
            if(temp->next==NULL) tail=temp;
            temp=temp->next;
        }
        //is loop ke end me temp NULL pe hoga and that is the tail so tail ko yahi last node pe pahucha skte h bina loop chalaye as we done below
        if(k>n) k=k%n;
        if(k==n) return head;
        //tail=temp;
        temp=head;
        for(int i=1;i<n-k;i++){
            temp=temp->next;
        } //now temp is at its right position which will be the tail of rotated list
        // while(tail->next!=NULL){ done above 
        //     tail=tail->next;
        // } //tail end pe pahuch gya and tail->=head and head=temp->next and temp->next=NULL
        tail->next=head;
        head=temp->next;
        temp->next=NULL;
        return head;
    }
};