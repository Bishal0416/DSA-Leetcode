class Solution {
public:
    int heightChecker(vector<int>& heights) {
        vector<int> exp = heights;
        int ans= 0;
        sort(exp.begin(), exp.end());

        for(int i = 0; i < heights.size(); i++){
            if(exp[i] != heights[i]) ans++;
        }
        return ans;
    }
};