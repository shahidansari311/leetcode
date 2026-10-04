class Solution {
public:
    void check(TreeNode* temp, int maxVal, int &count) {
        if (temp==NULL) return;
        if (temp->val>=maxVal) {
            count++;
            maxVal=temp->val;
        }

        check(temp->left,maxVal,count);
        check(temp->right,maxVal,count);
    }

    int goodNodes(TreeNode* root) {
        int count=0;
        check(root,root->val,count);
        return count;
    }
};