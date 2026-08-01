class Solution {
public:
    long long countSubarrays(vector<int>& nums, long long k) {
        long long start=0,end=0;
        long long count=0,sum=0,t=0;
        while(end<nums.size()){
            sum+=nums[end];
            count++;
            while(sum*count >= k && start<=end){
                sum-=nums[start];
                count--;
                start++;
            }
            t+=end-start+1;
            end++;
        }
        return t;
    }
};