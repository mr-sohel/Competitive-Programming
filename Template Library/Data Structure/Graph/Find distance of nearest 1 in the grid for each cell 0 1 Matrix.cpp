class Solution
{
public:
    int dx[4] = { -1, 0, 1, 0};
    int dy[4] = {0, 1, 0, -1};
    //Function to find distance of nearest 1 in the grid for each cell.
    vector<vector<int>>nearest(vector<vector<int>>grid) {
        int n = grid.size();
        int m = grid[0].size();

        vector<vector<int>>ans(n, vector<int>(m, 0));
        auto vis = ans;
        queue<pair<pair<int, int>, int>> q;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (grid[i][j] == 1) {
                    q.push({{i, j}, 0});
                    vis[i][j] = 1;
                }
            }
        }
        while (!q.empty()) {
            int r = q.front().first.first;
            int c = q.front().first.second;
            int time = q.front().second;
            q.pop();
            for (int i = 0; i < 4; i++) {
                int nrow = r + dx[i];
                int ncol = c + dy[i];
                if (nrow >= 0 and nrow < n and ncol >= 0 and ncol < m and grid[nrow][ncol] == 0 and vis[nrow][ncol] == 0) {
                    ans[nrow][ncol] = time + 1;
                    q.push({{nrow, ncol}, time + 1});
                    vis[nrow][ncol] = 1;
                }
            }
        }
        return ans;
    }
};