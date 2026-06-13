class Solution {
public:
    int minKBitFlips(vector<int>& nums, int k) {
        int flip=0;
        queue<int>q;
        int n=nums.size();
        for(int i=0;i<n;i++){
            while(!q.empty() && q.front()<i){
                q.pop();
            }
            if(q.size()%2==nums[i]){
                if(i+k > n) return -1;
                q.push(i+k-1);
                flip++;
            }
        }
        return flip;
    }
};