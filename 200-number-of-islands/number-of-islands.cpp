class Solution {
public:

    int dfs(vector<vector<char>>& grid, int i , int j){
        if(i<0 || i>=grid.size() || j<0 || j>=grid[0].size() || grid[i][j] != '1') return 0 ;

        grid[i][j] = '#';

        dfs(grid, i+1, j);
        dfs(grid, i-1, j);
        dfs(grid, i, j+1);
        dfs(grid, i, j-1);
        return 0;
    }

    int numIslands(vector<vector<char>>& grid) {
        int i = grid.size();
        int j = grid[0].size();
        int res = 0;

        for(int k = 0; k<i; k++){
            for(int l=0; l<j; l++){

                if(grid[k][l] == '1'){
                    dfs(grid, k, l);
                    res++;
                }

            }
        }
        return res;
    }
};