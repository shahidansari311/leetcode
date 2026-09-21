class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        map<int, int> m;
        for (int x:nums) {
            if(x>0) {
                m[x]++;
            }
        }

        int ans=1;

        for (auto a:m) {
            if (a.first==ans) {
                ans++;
            } 
            else if(a.first>ans) {
                return ans;
            }
        }
        return ans;
    }
};