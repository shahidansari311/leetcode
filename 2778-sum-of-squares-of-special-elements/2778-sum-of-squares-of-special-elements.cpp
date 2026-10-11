class Solution {
public:
    int sumOfSquares(vector<int>& nums) {
        vector<int>ans;
        int n=nums.size();
        for(int i=1;i<=n;i++){
            if(n%i==0){
                ans.push_back(nums[i-1]);
            }
        }
        int sum=0;
        for(int i=0;i<ans.size();i++){
            sum+=(ans[i]*ans[i]);
        }
        return sum;
    }
};