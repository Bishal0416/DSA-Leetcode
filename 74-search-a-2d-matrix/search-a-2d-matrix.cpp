class Solution {
public:
    bool searchMatrix(vector<vector<int>>& mat, int target) {
        int n = mat.size();
        int m = mat[0].size();

        int start = 0;
        int end = n * m - 1;
        int mid;

        while(start <= end) {
            mid = start + (end - start) / 2 ;
            int x = mid / m;
            int y = mid % m;

            if(mat[x][y] == target) return true;
            if(mat[x][y] < target) start = mid + 1;
            else end = mid - 1;
        }
        return false;
    }
};