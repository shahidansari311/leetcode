class Solution {
public:
    vector<int> getOrder(vector<vector<int>>& tasks) {
        vector<int>ans;
        for(int i=0;i<tasks.size();i++){
            tasks[i].push_back(i);
        }

        sort(tasks.begin(),tasks.end());
        
        long long timer=tasks[0][0];
        int i=0;

        priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>>q;

        while(!q.empty() || i<tasks.size()){
            while(i<tasks.size() && timer>=tasks[i][0]){
                q.push({tasks[i][1],tasks[i][2]});
                i++;
            }

            if(q.empty()){
                timer=tasks[i][0];
            }
            else{
                ans.push_back(q.top().second);
                timer+=q.top().first;
                q.pop();
            }
        }
        return ans;
    }

};