class Solution {
public:
    bool checkString(string s) {
        bool a=0,b=0;
        for(int i=0;i<s.size();i++){
            if(s[i]=='a') a=1;
            if(s[i]=='b') b=1;
            if(b==1 && s[i]=='a') return false;
        }
        return true;
    }
};