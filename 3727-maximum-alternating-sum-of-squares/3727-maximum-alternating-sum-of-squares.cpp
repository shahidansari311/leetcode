class Solution {
public:
    long long maxAlternatingSum(vector<int>& nums) {
        vector<int>ans;
        for(int i=0;i<nums.size();i++){
            ans.push_back(nums[i]*nums[i]);
        }
        sort(ans.begin(),ans.end());
        int i=0,j=ans.size()-1;
        long long sum=0;
        while(i<=j){
            sum+=ans[j];
            if(i>=j) break;
            sum-=ans[i];
            j--;
            i++;
        }
        return sum;
    }
};