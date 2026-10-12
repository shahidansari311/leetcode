class Solution {
public:
    int tribonacci(int n) {
        if(n==0) return 0;
        if(n==1 || n==2) return 1;
        int a=0,b=1,c=1,d;
        for(int i=n-2;i>0;i--){
            d=a+b+c;
            a=b;
            b=c;
            c=d;
        }
        return d;
    }
};