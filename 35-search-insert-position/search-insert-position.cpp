class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int ans = -1;
        int lb = 0;
        int ub = nums.size() - 1;
        int mid;
        if(target < nums[0]) return 0;
        if(target > nums[ub]) return nums.size();
        while( lb <= ub ){
            mid = lb + (ub - lb ) / 2;
            if(nums[mid] == target){
                ans = mid; return ans;
            }
            else if(nums[mid] < target){
                lb = mid + 1;
            } 
            else{
                ub = mid - 1;
            }
        }
        ans = lb ;
        return ans;
    }
};