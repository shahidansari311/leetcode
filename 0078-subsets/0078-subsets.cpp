class Solution {
public:
    void subseq(vector<int>nums,int index,int n,vector<int>temp,vector<vector<int>>&ans){
        //Base case
        if(index==n){
            ans.push_back(temp);
            return;
        }

        //Not included
        subseq(nums,index+1,n,temp,ans);
    
        //Included
        temp.push_back(nums[index]);
        subseq(nums,index+1,n,temp,ans);
    }

    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>>ans;
        vector<int>temp;

        subseq(nums,0,nums.size(),temp,ans);
        return ans;
    }
};