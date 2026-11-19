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
    ListNode* reverseLL(ListNode* root) {
        ListNode *prev=NULL, *curr=root;
        while(curr!=NULL) {
            ListNode* ne=curr->next;
            curr->next=prev;
            prev=curr;
            curr=ne;
        }
        return prev;
    }
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* l1new=reverseLL(l1);
        ListNode* l2new=reverseLL(l2);

        ListNode* dummy = new ListNode(0);
        ListNode* ans = dummy;
        int carry=0;
        while(l1new!=NULL || l2new!=NULL || carry){
            ListNode* temp=new ListNode(0);
            int a=(l1new!=NULL)?l1new->val:0;
            int b=(l2new!=NULL)?l2new->val:0;
            int d=a+b+carry;
            temp->val=d%10;
            carry=d/10;
            ans->next=temp;
            ans=ans->next;
            if(l1new) l1new = l1new->next;
            if(l2new) l2new = l2new->next;
        }   
        
        return reverseLL(dummy->next);
    }
};