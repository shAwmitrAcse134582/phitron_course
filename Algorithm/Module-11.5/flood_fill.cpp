class Solution {
public:
    vector<pair<int, int>> dir = {{1, 0}, {-1, 0}, {0, 1}, {0, -1}};
 
    bool isvalid(int i, int j, int row, int col) {
        return (i >= 0 && i < row && j >= 0 && j < col);
    }
 
    void dfs(vector<vector<int>>& img, int m, int i, int j, int color) {
        img[i][j] = color;
        for (auto d : dir) {
            int x = i + d.first;
            int y = j + d.second;
 
            if (isvalid(x, y, img.size(), img[0].size()) && img[x][y] == m) {
                dfs(img, m, x, y, color);
            }
        }
    }
 
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        if (image[sr][sc] == color) {
            
            return image;
        }
 
        int row = image.size();
        int col = image[0].size();
        int startColor = image[sr][sc];
 
        dfs(image, startColor, sr, sc, color);
 
        return image;
    }
};
