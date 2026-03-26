class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int n=piles.size();
        int s=1,e=0,ans,mid;
        for(int i=0;i<n;i++){
            e=max(e,piles[i]);
        }
        while(s<=e){
            mid=s+(e-s)/2;
            long long total=0;
            for(int i=0;i<n;i++){
                total += (piles[i] + mid - 1) / mid;
            }
            if(total>h){
                s=mid+1;
            }
            else{
                ans=mid;
                e=mid-1;
            }
        }
        return ans;
    }
};