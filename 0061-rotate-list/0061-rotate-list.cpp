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

        int count =0;
        ListNode* temp=head;
        while(temp){
            count++;
            temp=temp->next;
        }
        k=k%count;
        if(k==0){
            return head;
        }
        count=count-k-1;

        temp=head;
        while(count>0){
            temp=temp->next;
            count--;
        }
        ListNode* second=temp->next;
        temp->next=NULL;

        ListNode* tail=second;
        while(tail->next!=NULL){
            tail=tail->next;
        }
        tail->next=head;
        return second;
    }
};