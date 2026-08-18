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
    void gro(ListNode* start,ListNode* end){
        ListNode* temp=start;
        stack<int>st;
        while(temp!=end){
            st.push(temp->val);
            temp=temp->next;
        }
        temp=start;
        while(!st.empty()){
            temp->val=st.top();
            st.pop();
            temp=temp->next;
        }
    }
    ListNode* reverseKGroup(ListNode* head, int k) {
        ListNode *temp=head, *temp2=head;
        int l=0;
        while(temp!=NULL && temp2!=NULL){
            l++;
            temp=temp->next;
            if(l%k==0){
                gro(temp2,temp);
                temp2=temp;
            }
        }
        return head;
    }
};