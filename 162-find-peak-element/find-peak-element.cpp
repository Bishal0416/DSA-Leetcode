class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int n =  nums.size();
        int s = 1;
        int e  = n - 2 ;
        int m, ans;
        if(n == 1) return 0;
        if(nums[0] > nums[1]) return 0;
        if(nums[n-1] > nums[n-2]) return n-1;

        while( s <= e) {
            m = s + (e - s) / 2;
            if(nums[m-1] < nums[m] && nums[m] > nums[m+1]) ans = m;

            if(nums[m-1] < nums[m]) s = m + 1;
            else e = m - 1;
        }
        return ans;
    }
};