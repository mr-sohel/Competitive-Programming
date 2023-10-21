class Solution {
public:
    int dx[4] = { -1, 0, 1, 0};
    int dy[4] = {0, 1, 0, -1};
    void dfs(int sr, int sc, vector<vector<int>> &image, vector<vector<int>> &vis, vector<vector<int>> &ans, int newColor, int init) {
        vis[sr][sc] = 1;
        ans[sr][sc] = newColor;
        int n = image.size();
        int m = image[0].size();
        for (int i = 0; i < 4; i++) {
            int nrow = sr + dx[i];
            int ncol = sc + dy[i];
            if (nrow >= 0 and nrow < n and ncol >= 0 and ncol < m and image[nrow][ncol] == init and vis[nrow][ncol] == 0) {
                dfs(nrow, ncol, image, vis, ans, newColor, init);
            }
        }
    }
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int newColor) {
        int n = image.size();
        int m = image[0].size();
        vector<vector<int>> ans, vis(n, vector<int>(m, 0));
        ans = image;

        int init = image[sr][sc];
        dfs(sr, sc, image, vis, ans, newColor, init);
        return ans;
    }
};