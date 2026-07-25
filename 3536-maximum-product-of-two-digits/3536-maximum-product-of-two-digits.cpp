class Solution {
public:
    int maxProduct(int n) {
        vector<int>arr;
        while(n){
            arr.push_back(n%10);
            n=n/10;
        }
        sort(arr.begin(),arr.end());
        return arr[arr.size()-2]*arr[arr.size()-1];
    }
};