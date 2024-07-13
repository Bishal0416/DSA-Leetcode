class Solution {
public:
    bool search(vector<int>& nums, int target) {
        int s = 0;
        int e = nums.size() - 1;
        int m;

        while(s <= e) {
            m  = s + (e - s) / 2;
            if(nums[m] == target) return true;
            if(nums[s] == nums[m] && nums[m] == nums[e]){
                s++;
                e--;
                continue;

            }
            if(nums[m] >= nums[s]) {
                if(nums[s] <= target && target <= nums[m]) e = m - 1;
                else s = m + 1;
            }
            else{
                if(nums[m] <= target && target <= nums[e]) s = m + 1;
                else e = m - 1;
            }
        }
        return false;
    }
};