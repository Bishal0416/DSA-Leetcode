class Solution {
public:
    int findMin(vector<int>& nums) {
        int s = 0, e = nums.size()-1, m, ans = INT_MAX;
        while(s <= e) {
            m = s + (e - s) / 2;
            ans = min(ans, nums[m]);
            if(nums[s] <= nums[m]) {
                ans = min(ans, nums[s]);
                s = m + 1;
            }
            else {
                ans = min(ans, nums[m+1]);
                e = m - 1;
            }
        }
        return ans;
    }
};