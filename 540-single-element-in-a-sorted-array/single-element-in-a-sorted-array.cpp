class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int s = 0; 
        int e = nums.size()-1;
        int ans, m;

        if(nums.size() == 1) return nums[0];
        if (nums[0] != nums[1]) return nums[0];
        if (nums[e] != nums[e-1]) return nums[e];

        while(s <= e) {
            m = s + ( e - s ) / 2;
            // if(m == 0 || m == e) {
            //     ans = nums[m];
            //     break;
            // }
            if(nums[m] != nums[m-1] && nums[m] != nums[m+1]) {
                ans = nums[m];
                break;
            }

            if(m % 2 == 0) {
                if(nums[m] != nums[m+1]) e = m - 1;
                else s = m +1;
            }
            else if(m % 2 == 1) {
                if(nums[m] != nums[m - 1]) e = m - 1;
                else s = m + 1;
            }
        }
        return ans;
    }
};