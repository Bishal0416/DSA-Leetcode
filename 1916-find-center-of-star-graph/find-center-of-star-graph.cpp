class Solution {
public:
    int findCenter(vector<vector<int>>& edges) {
        int n = edges.size();
        // int m = edges[0].sizez();
        int a = edges[0][0], b = edges[0][1];
        int ans;
        for(int i = 1; i < n; i++){
            int x = edges[i][0], y = edges[i][1];
            if(a == x) ans = x;
            else if(a == y) ans = y;
            else if(b == x) ans = x;
            else if(b == y) ans = y;
            a = x;
            b = y;
        }

        return ans;
    }
};