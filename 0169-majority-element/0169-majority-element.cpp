class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n=nums.size();
        int ans=n/2;
        map<int,int>res;
        for(int i=0;i<n;i++){
            res[nums[i]]++;
        }
        for(auto i:res){
            if(i.second>ans){
                return i.first;
            }
        }
        return -1;
    }
};