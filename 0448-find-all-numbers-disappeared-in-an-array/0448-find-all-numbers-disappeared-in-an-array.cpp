class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        map<int,int>m;
        int ans=nums.size();
        while(ans>0){
            m[ans]++;
            ans--;
        }
        for(int i=0;i<nums.size();i++){
            m[nums[i]]--;
        }
        vector<int>res;
        for(auto x:m){
            if(x.second==1) res.push_back(x.first);
        }
        return res;
    }
};