class Solution {
public:
    bool canAliceWin(int n) {
        bool alice=false;
        int temp=10;
        while(temp <= n){
            if(temp%2==0){
                n-=temp;
                alice=true;
            }
            else{
                n-=temp;
                alice=false;
            }
            temp--;
        }
        return alice;
    }
};