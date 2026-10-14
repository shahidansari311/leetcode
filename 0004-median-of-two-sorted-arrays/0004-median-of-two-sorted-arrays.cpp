class Solution {
public:
    void merge(vector<int>& nums1, vector<int>& nums2,vector<double>&ans){
        int a=nums1.size();
        int b=nums2.size();
        int i=0,j=0;
        while(i<a && j<b){
            if(nums1[i]<nums2[j]){
                ans.push_back(nums1[i]);
                i++;
            }
            else{
                ans.push_back(nums2[j]);
                j++;
            }
        }
        while(i<a){
            ans.push_back(nums1[i++]);
        }
        while(j<b){
            ans.push_back(nums2[j++]);
        }
    }
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<double>ans;
        merge(nums1,nums2,ans);
        int n=ans.size();
        if(n%2!=0){
            int mid=(0+(n-1))/2;
            return ans[mid];
        }
        else {
            int mid=(0+(n-1))/2;
            double c=(ans[mid]+ans[mid+1])/2.000;
            return c;
        }
    }
};