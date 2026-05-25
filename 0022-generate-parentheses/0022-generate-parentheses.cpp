class Solution {
public:
    void para(int n,int left,int right,string s,vector<string>&ans){
        //Base case
        if(left+right==2*n){
            ans.push_back(s);
            return;
        }

        //left
        if(left<n){
            para(n,left+1,right,s+"(",ans);
        }

        //right
        if(right<left){
            para(n,left,right+1,s+")",ans);
        }
    }

    vector<string> generateParenthesis(int n) {
      int left=0,right=0;
      string s="";
      vector<string>ans;
      para(n,left,right,s,ans);
      return ans;  
    }
};