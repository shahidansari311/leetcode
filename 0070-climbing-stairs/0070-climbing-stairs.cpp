class Solution {
public:
    int count(int i,vector<int>&dp,int &n){
        if(i==n) return 1;
        if(i>n) return 0;

        if(dp[i]!=-1) return dp[i];
        return dp[i] = count(i+1,dp,n)+count(i+2,dp,n); 
    }
    int climbStairs(int n) {
        vector<int>dp(n,-1);
        return count(0,dp,n);
    }
};