class Solution {
public:
    bool searchMatrix(vector<vector<int>>& mat, int target) {
        int n = 0;
        int m = mat[0].size() - 1;

        while(n < mat.size()  && m >= 0) {
            if(mat[n][m] == target) return true;
            else if (mat[n][m] < target) n++;
            else m--;
        }
        return false;
    }
};