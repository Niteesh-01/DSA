class Node{
public:
    int val;
    Node* next;
    Node(int v){
        val=v;
        this->next=NULL;
    }
};
class MyLinkedList {
public:
    Node* head;
    Node* tail;
    int size;
    MyLinkedList() {
        this->head=NULL;
        this->tail=NULL;
        size=0;
    }
    
    int get(int index) {
        int ans=0;
        if(index<0 || index>=size) return -1;
        Node* temp=head;
        for(int i=1;i<=index;i++){
            temp=temp->next;
        }
        return temp->val;
    }
    
    void addAtHead(int val) {
        Node* temp=new Node(val);
        if(size==0) head=tail=temp;
        else{
            temp->next=head;
            head=temp;
        }
        size++;
    }
    
    void addAtTail(int val) {
        Node* temp=new Node(val);
        if(size==0) head=tail=temp;
        else{
            tail->next=temp;
            //temp->next=NULL;
            tail=temp;
        }
        size++;
    }
    
    void addAtIndex(int index, int val) {
        if(index<0 || index>size){
            return;
        }
        else if(index==0) {
            addAtHead(val);
        }
        else if(index==size){
            addAtTail(val);
        }
        else{
            Node* t=new Node(val);
            Node* temp=head;
            for(int i=1;i<index;i++){
                temp=temp->next;
            }
            t->next=temp->next;
            temp->next=t;
            size++;
        }
    }
    
    void deleteAtIndex(int index) {
        if (index < 0 || index >= size) return;
        if (index == 0) {
            Node* toDelete = head;
            head = head->next;
            delete toDelete;
            size--;
            if (size == 0) tail = NULL;
            return;
        }

        Node* temp = head;
        for (int i = 0; i < index - 1; i++) temp = temp->next;

        Node* toDelete = temp->next;
        temp->next = toDelete->next;
        if (toDelete == tail) tail = temp;

        delete toDelete;
        size--;
    }
};

/**
 * Your MyLinkedList object will be instantiated and called as such:
 * MyLinkedList* obj = new MyLinkedList();
 * int param_1 = obj->get(index);
 * obj->addAtHead(val);
 * obj->addAtTail(val);
 * obj->addAtIndex(index,val);
 * obj->deleteAtIndex(index);
 */