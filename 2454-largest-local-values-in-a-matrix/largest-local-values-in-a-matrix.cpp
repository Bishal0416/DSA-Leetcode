
#pragma GCC optimize ("Ofast")
#pragma GCC target ("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx")
#pragma GCC optimize ("-ffloat-store")
class Solution {
public:
    int getMax(int startRow, int startCol, vector<vector<int>>& grid){
        int maxi= INT_MIN;
        for(int i = startRow; i < startRow + 3; i++){
            for(int j = startCol; j < startCol + 3; j++){
                maxi = max(maxi, grid[i][j]);
            }
        }
        return maxi;
    }
    vector<vector<int>> largestLocal(vector<vector<int>>& grid) {
        int n  = grid.size();
        vector<vector<int>> res;

        for(int i = 0; i < n-2; i++){
            vector<int> temp;
            for(int j = 0; j < n-2; j++){
                int MAXI = getMax(i, j, grid);
                temp.push_back(MAXI);
            }
            res.push_back(temp);
        }
        return res;
    }
};