class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
        unordered_map<int,int>m;
        int sum=0,t=0;
        m[0]=1;
        for(int i=0;i<nums.size();i++){
            sum+=nums[i];
            int a=sum%k;
            if(a<0) a=k+a;

            if(m.count(a)){
                t+=m[a];
                m[a]++;
            } 
            else{
                m[a]=1;
            }
        }
        return t;
    }
};