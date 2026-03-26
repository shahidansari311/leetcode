class Solution {
public:
    string frequencySort(string s) {
        unordered_map<char,int> m;
        for(char c : s){
            m[c]++;
        }

        vector<pair<char,int>> v(m.begin(), m.end());

        sort(v.begin(), v.end(), [](auto &a, auto &b){
            return a.second > b.second;
        });

        string ans = "";
        for(auto &p : v){
            ans.append(p.second, p.first);
        }

        return ans;
    }
};