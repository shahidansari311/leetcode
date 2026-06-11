class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        stack<int>st;
        int ans=0,index=-1;
        for(int i=0;i<heights.size();i++){
            while(!st.empty() && heights[st.top()] >= heights[i]){
                index=st.top();
                st.pop();
                if(!st.empty()){
                    ans=max(ans,heights[index]*(i-st.top()-1));
                }
                else{
                    ans=max(ans,heights[index]*i);
                }
            }
            st.push(i);
        }
        while(!st.empty()){
            index=st.top();
            st.pop();
            if(!st.empty()){
                ans=max(ans,heights[index]*((int)heights.size()-st.top()-1));
            }
            else{
                ans=max(ans,heights[index]*(int)heights.size());
            }
        }
        return ans;
    }
};