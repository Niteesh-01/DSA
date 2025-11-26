/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/

class Solution {
public:
    Node* copyRandomList(Node* head) {
        // Node* copy=new Node(0);
        // Node* t=copy;
        // Node* temp=head;
        // while(temp){
        //     Node* a=new Node(temp->val);
        //     t->next=a;
        //     temp=temp->next;
        //     t=t->next;
        // }
        // temp=head;
        // t=copy->next;
        // Node* r=copy->next;
        // while(t){
        //     if(temp->random==NULL){
        //         t=t->next;
        //         temp=temp->next;
        //     }
        //     else if(temp->random->val!=r->val){
        //         r=r->next;
        //     }
        //     else{
        //         t->random=r;
        //         r=copy->next;
        //         t=t->next;
        //         temp=temp->next;
        //     }
        // }
        // return copy->next;

        //using hash map

        if(!head) return NULL;
        unordered_map<Node*,Node*> mp;
        Node* temp = head;
        while(temp){
            mp[temp]=new Node(temp->val);
            temp=temp->next;
        }
        temp=head;
        while(temp){
            mp[temp]->next = mp[temp->next];
            mp[temp]->random = mp[temp->random];
            temp = temp->next;
        }
        return mp[head];
    }
};