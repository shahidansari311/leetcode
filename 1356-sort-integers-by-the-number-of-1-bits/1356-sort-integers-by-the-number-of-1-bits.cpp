class Solution {
public:
    vector<int> sortByBits(vector<int>& arr) {
        vector<pair<int ,int>>m;
        vector<int >ans;
        for(int i=0;i<arr.size();i++){
            int temp=arr[i],c=0;
            while(temp!=0){
                if(temp%2==1) c++;
                temp/=2;
            }
            m.push_back({c, arr[i]});
        }
        sort(m.begin(), m.end());
        for(auto x:m){
            ans.push_back(x.second);
        }
        return ans;
    }
};