class Solution {
public:
    int numIslands(vector<vector<char>>& grid) {
        int r = grid.size();
        int c = grid[0].size();

        int count = 0;

        for(int i = 0; i < r; i++){
            for(int j = 0; j < c; j++){
                if(grid[i][j] == '1'){
                    dfs(grid, i, j, r, c);
                    count++; 
                }
            }
        }
        return count;
    }
private:
    void dfs(vector<vector<char>>& grid, int i, int j, int r, int c) {
        if (i < 0 || i >= r || j < 0 || j >= c || grid[i][j] == '0') {
            return;
        }
        grid[i][j] = '0';
        
        dfs(grid, i - 1, j, r, c);
        dfs(grid, i + 1, j, r, c);
        dfs(grid, i, j - 1, r, c);
        dfs(grid, i, j + 1, r, c);
    }
};