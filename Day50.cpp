

//C++ | Simple DFS 

 

class Solution
{
public:
    vector<int> dx = {-1, -1, -1, 0, 1, 1, 1, 0};
    vector<int> dy = {-1, 0, 1, 1, 1, 0, -1, -1};
    int n, m, ans = 0;
    void dfs(int i, int j, vector<vector<int>> &vis, vector<vector<int>> &grid)
    {
        vis[i][j] = 1;
        for (int k = 0; k < 8; k++)
        {
            int x = i + dx[k];
            int y = j + dy[k];

            if (x >= 0 && x < n && y >= 0 && y < m && !vis[x][y] && grid[x][y])
            {
                ans++;
                dfs(x, y, vis, grid);
            }
        }
    }
    int findMaxArea(vector<vector<int>> &grid)
    {
        n = grid.size(), m = grid[0].size();
        int finalans = 0;
        vector<vector<int>> vis(n, vector<int>(m));
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                if (grid[i][j] && !vis[i][j])
                {
                    ans = 1;
                    dfs(i, j, vis, grid);
                    finalans = max(finalans, ans);
                }
            }
        }
        return finalans;
    }
};