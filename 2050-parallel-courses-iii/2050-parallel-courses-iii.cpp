class Solution {
public:
    int minimumTime(int n, vector<vector<int>>& relations, vector<int>& time) {
        vector<int>adj[n];
        for(int i=0;i<relations.size();i++){
            adj[relations[i][0]-1].push_back(relations[i][1]-1);
        }
        vector<int>InDeg(n,0);
        for(int i=0;i<n;i++)
            for(int j=0;j<adj[i].size();j++)
                InDeg[adj[i][j]]++;
        
        queue<int>q;
        for(int i=0;i<n;i++){
            if(!InDeg[i])
                q.push(i);
        }

        vector<int>Pre(n,0);
        while(!q.empty()){
            int node=q.front();
            q.pop();

            for(int i=0;i<adj[node].size();i++){
                InDeg[adj[node][i]]--;
                if(!InDeg[adj[node][i]])
                q.push(adj[node][i]);

                Pre[adj[node][i]]=max(Pre[node]+time[node],Pre[adj[node][i]]);

            }
        }

        int ans=0; 
        for(int i=0;i<n;i++){
            ans=max(ans,Pre[i]+time[i]);
        }
        return ans;
    }
};