class Solution {
public:
    int climbStairs(int n) {
        // if(n<=1) return 1;
        // return climbStairs(n-1)+climbStairs(n-2);

        int a=1,b=1,c;
        for(int i=2;i<=n;i++){
            c=a+b;
            a=b;
            b=c;
        }
        return b;
    }
};