class Solution {
public:
    int dx[4] = { -1, 0, +1, 0};
    int dy[4] = {0, +1, 0, -1};
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int newColor) {
        int n = image.size();
        int m = image[0].size();
        vector<vector<bool>>vis(n, vector<bool>(m, false));
        auto ans = image;
        queue<pair<int, int>> q;
        q.push({sr, sc});
        int init = image[sr][sc];
        ans[sr][sc] = newColor;
        while (!q.empty()) {
            int r = q.front().first;
            int c = q.front().second;
            q.pop();
            for (int i = 0; i < 4; i++) {
                int nrow = r + dx[i];
                int ncol = c + dy[i];
                if (nrow >= 0 and nrow < n and ncol >= 0 and ncol < m and image[nrow][ncol] == init and vis[nrow][ncol] == false) {
                    ans[nrow][ncol] = newColor;
                    vis[nrow][ncol] = true;
                    q.push({nrow, ncol});
                }
            }
        }
        return ans;
    }
};