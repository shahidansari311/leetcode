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
    void add(ListNode* l1, ListNode* l2,ListNode* &l3, int carry){
        if (!l1 && !l2 && carry == 0) return;
        
        int val1 = (l1 ? l1->val : 0);
        int val2 = (l2 ? l2->val : 0);
        int sum = val1 + val2 + carry;
        l3->val=sum%10;
        carry=sum/10;

        if ((l1 && l1->next) || (l2 && l2->next) || carry){
            
            l3->next = new ListNode();

            add(l1 ? l1->next : nullptr,l2? l2->next:nullptr,l3->next,carry);
            }
    }
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        int carry=0;
        ListNode* l3=new ListNode();
        add(l1,l2,l3,carry);
        return l3;
    }
};