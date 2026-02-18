class Solution {
public:
    string binary(int n){
        string s="";
        while(n!=0){
            if(n%2==1){
                s+='1';
            }
            else{
                s+='0';
            }
            n/=2;
        }
        return s;
    }
    bool hasAlternatingBits(int n) {
        string a=binary(n);
        for(int i=0;i<a.size()-1;i++){
            if(a[i]==a[i+1]){
                return false;
            }
        }
        return true;
    }
};