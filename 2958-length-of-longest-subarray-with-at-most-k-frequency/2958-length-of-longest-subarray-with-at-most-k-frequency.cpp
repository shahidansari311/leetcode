class Solution {
public:
    int maxSubarrayLength(vector<int>& nums, int k) {
        int len=0;
        unordered_map<int,int>m;
        int start=0,end=0;
        while(end<nums.size()){
            m[nums[end]]++;

            while(m[nums[end]]>k){
                m[nums[start]]--;
                start++;
            }

            len=max(len,end-start+1);
            end++;
        }
        return len;
    }
};