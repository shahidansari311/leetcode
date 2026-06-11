class Solution {
public:
    int rectangle(vector<int>&height){
        int ans=0,index=0;
        stack<int>st;
        for(int i=0;i<height.size();i++){
            while(!st.empty() && height[i]<height[st.top()]){
                index=st.top();
                st.pop();
                if(!st.empty()){
                    ans=max(ans,(int)height[index]*(i-st.top()-1));
                }
                else{
                    ans=max(ans,(int)height[index]*i);
                }
            }
            st.push(i);
        }
        while(!st.empty()){
            index=st.top();
            st.pop();
            if(!st.empty()){
                ans=max(ans,(int)height[index]*((int)height.size()-st.top()-1));
            }
            else{
                ans=max(ans,(int)height[index]*(int)height.size());
            }
        }
        return ans;
    }
    int maximalRectangle(vector<vector<char>>& matrix) {
        int row=matrix.size();
        int col=matrix[0].size();
        int ans=0;
        vector<int>height(col,0);
        for(int i=0;i<row;i++){
            for(int j=0;j<col;j++){
                if(matrix[i][j]=='0'){
                    height[j]=0;
                }
                else{
                    height[j]++;
                }
            }
            ans=max(ans,rectangle(height));
        }
        return ans;
    }
};