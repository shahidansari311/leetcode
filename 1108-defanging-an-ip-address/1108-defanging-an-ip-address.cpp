class Solution {
public:
    string defangIPaddr(string address) {
        string s="";
        for(auto a:address){
            if(a=='.') s+="[.]";
            else s+=a; 
        }
        return s;
    }
};