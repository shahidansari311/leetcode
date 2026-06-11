class Solution {
public:
    vector<int> right(vector<int>&arr){
        vector<int>ans(arr.size());
        stack<int>st;
        for(int i=0;i<arr.size();i++){
            while(!st.empty() && arr[i]<arr[st.top()]){
                ans[st.top()]=i;
                st.pop();
            }
            st.push(i);
        }
        while(!st.empty()){
            ans[st.top()]=arr.size();
            st.pop();
        }
        return ans;
    }

    vector<int> left(vector<int>&arr){
        vector<int>ans(arr.size());
        stack<int>st;
        for(int i=arr.size()-1;i>=0;i--){
            while(!st.empty() && arr[i]<arr[st.top()]){
                ans[st.top()]=i;
                st.pop();
            }
            st.push(i);
        }
        while(!st.empty()){
            ans[st.top()]=-1;
            st.pop();
        }
        return ans;
    }

    int largestRectangleArea(vector<int>& heights) {
        vector<int>nr=right(heights);
        vector<int>nl=left(heights);

        int maxi=INT_MIN;
        for(int i=0;i<heights.size();i++){
            int val=heights[i]*( nr[i]-nl[i] -1);
            maxi=max(maxi,val);
        }
        return maxi;
    }
};