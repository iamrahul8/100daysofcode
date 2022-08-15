// Count the paths 
//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends

class Solution {
    public:
    int dfs(int s, int d, vector<vector<int>> &adj, vector<int> &dp){
        if(s==d)
        return 1;
        if(dp[s] != -1)
        return dp[s];
        int count = 0;
        for(auto it : adj[s]){
            count += dfs(it,d,adj,dp);
        }
        return dp[s]=count;
    }
	int possible_paths(vector<vector<int>>edges, int n, int s, int d){
	    // Code here
	    vector<vector<int>> adj(n);
	    for(int i=0;i<edges.size();i++){
	        adj[edges[i][0]].push_back(edges[i][1]);
	    }
	    vector<int> dp(n,-1);
	    return dfs(s,d,adj,dp);
	}
};

// { Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n, m, s, d;
		cin >> n >> m >> s >> d;
		vector<vector<int>>edges;
		for(int i = 0; i < m; i++){
			int u, v;
			cin >> u >> v;
			edges.push_back({u,v});
		}
		Solution obj;
		int ans = obj.possible_paths(edges, n, s, d);
		cout << ans <<"\n";
	}
	return 0;
}  // } Driver Code Ends