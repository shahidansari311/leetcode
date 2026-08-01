class Solution {
public:
    int maxElement(vector<int>&nums){
        int a=INT_MIN;
        for(int i=0;i<nums.size();i++){
            a=max(a,nums[i]);
        }
        return a;
    }
    long long countSubarrays(vector<int>& nums, int k) {
        int n=nums.size();
        int start=0,end=0;
        long long total=0;
        int maxele=maxElement(nums);
        int count=0;

        while(end < n){
            if(nums[end]==maxele) count++;

            while(count==k){
                total+=n-end;
                if(nums[start]==maxele) count--;
                start++;
            }
            end++;
        }
        return total;
    }
};