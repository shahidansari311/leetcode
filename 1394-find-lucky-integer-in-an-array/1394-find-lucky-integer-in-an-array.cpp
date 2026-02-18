class Solution {
public:
    int findLucky(vector<int>& arr) {
        int ans=-1;
        map<int,int>m;
        for(int i=0;i<arr.size();i++){
            m[arr[i]]++;
        }
        for(auto x:m){
            if(x.first==x.second){
                ans=x.first;
            }
        }
        return ans;
    }
};