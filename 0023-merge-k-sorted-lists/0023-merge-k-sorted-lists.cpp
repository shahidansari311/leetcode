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
    ListNode* mergeKLists(vector<ListNode*>& lists) {  
        priority_queue<int,vector<int>,greater<int>>p;
        for(int i=0;i<lists.size();i++){
            ListNode *temp=lists[i];
            while(temp!=NULL){
                p.push(temp->val);
                temp=temp->next;
            }
        }
        ListNode *ans=new ListNode();
        ListNode *head=ans;
        while(!p.empty()){
            int node=p.top();
            p.pop();
            ListNode *temp=new ListNode(node);
            ans->next=temp;
            ans=ans->next;
        }
        return head->next;
    }
};