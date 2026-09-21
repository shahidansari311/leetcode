class MyLinkedList {
public:
    int val;
    MyLinkedList* next;
    MyLinkedList* head;

    MyLinkedList() {
        head = NULL;
    }

    int get(int index) {
        MyLinkedList* temp=head;
        int count=0;

        while (temp!=NULL) {
            if (count==index) {
                return temp->val;
            }
            count++;
            temp=temp->next;
        }
        return -1;
    }

    void addAtHead(int val) {
        MyLinkedList* newNode=new MyLinkedList();
        newNode->val=val;
        newNode->next=head;
        head=newNode;
    }

    void addAtTail(int val) {
        MyLinkedList* newNode=new MyLinkedList();
        newNode->val=val;
        newNode->next=NULL;

        if(head==NULL) {
            head=newNode;
            return;
        }

        MyLinkedList* temp=head;
        while(temp->next!=NULL) {
            temp=temp->next;
        }
        temp->next=newNode;
    }

    void addAtIndex(int index, int val) {
        if(index==0){
            addAtHead(val);
            return;
        }

        MyLinkedList* temp=head;

        int count=0;
        while(temp != NULL && count < index - 1) {
            temp=temp->next;
            count++;
        }

        if(temp==NULL) {
            return;
        }

        MyLinkedList* newNode=new MyLinkedList();

        newNode->val=val;
        newNode->next=temp->next;
        temp->next=newNode;
    }

    void deleteAtIndex(int index) {
        if(head==NULL){
            return;
        }

        if(index==0) {
            MyLinkedList* temp=head;
            head=head->next;
            delete temp;
            return;
        }

        MyLinkedList* temp=head;
        int count=0;

        while(temp!=NULL && count<index-1) {
            temp = temp->next;
            count++;
        }

        if (temp == NULL || temp->next == NULL) {
            return;
        }

        MyLinkedList* nodeToDelete = temp->next;

        temp->next = nodeToDelete->next;

        delete nodeToDelete;
    }
};