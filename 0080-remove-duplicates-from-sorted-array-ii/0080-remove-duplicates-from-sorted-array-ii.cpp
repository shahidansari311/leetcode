class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        map<int,int>m;
        int c=0;
        for(int i=0;i<nums.size();i++){
            m[nums[i]]++;
            c++;
            if(m[nums[i]]>2){
                nums[i]=INT_MAX;
                c--;
            }
        }
        sort(nums.begin(),nums.end());
        return c;
    }
};