const int N = 1005; // Adjust the size as needed
bool vis[N][N];
 
class Solution {
public:
    vector<pair<int, int>> dir = {{1, 0}, {-1, 0}, {0, 1}, {0, -1}};
 
    bool isvalid(int i, int j, int row, int col) {
        return (i >= 0 && i < row && j >= 0 && j < col);
    }
 
    void dfs(int i, int j, vector<vector<char>>& grid) {
        vis[i][j] = true;
 
        for (auto d : dir) {
            int x = i + d.first;
            int y = j + d.second;
 
            if (isvalid(x, y, grid.size(), grid[0].size()) && vis[x][y] == false && grid[x][y] == '1') {
                dfs(x, y, grid);
            }
        }
    }
 
    int numIslands(vector<vector<char>>& grid) {
        int row = grid.size();
        int col = grid[0].size();
        int island = 0;
 
        memset(vis, false, sizeof(vis)); // Initialize the vis array
 
        for (int i = 0; i < row; i++) {
            for (int j = 0; j < col; j++) {
                if (vis[i][j] == false && grid[i][j] == '1') {
                    island++;
                    dfs(i, j, grid);
                }
            }
        }
        return island;
    }
};
