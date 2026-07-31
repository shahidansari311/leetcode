class Solution {
public:
    bool isPalindrome(string s) {
        string val="";
        for(int i=0;i<s.size();i++){
            if((s[i]>='a' && s[i]<='z') || (s[i]>='A' && s[i]<='Z')){
                val+=tolower(s[i]);
            }
            if(s[i]>='0' && s[i]<='9') val+=s[i];
        }
        int i=0,j=val.size()-1;
        while(i<=j){
            if(val[i]!=val[j]){
                return false;
            }
            i++;
            j--;
        }
        return true;
    }
};