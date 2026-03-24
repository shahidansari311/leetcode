class Solution {
public:
    bool wordPattern(string pattern, string s) {
        vector<string> ans;
        string word = "";

        for(int i = 0; i < s.size(); i++){
            if(s[i] == ' ') {
                ans.push_back(word);
                word = "";
            } else {
                word += s[i];
            }
        }
        ans.push_back(word); // ✅ FIX 1

        if(pattern.size() != ans.size()) return false;

        map<char, string> mp1;
        map<string, char> mp2; // ✅ FIX 2

        for(int i = 0; i < pattern.size(); i++) {
            char ch = pattern[i];
            string w = ans[i];

            if(mp1.count(ch) && mp1[ch] != w) return false;
            if(mp2.count(w) && mp2[w] != ch) return false;

            mp1[ch] = w;
            mp2[w] = ch;
        }

        return true;
    }
};