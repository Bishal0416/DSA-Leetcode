class Solution {
public:
    int search(vector<int>& nums, int target) {
        int ans = -1;
        int lb = 0;
        int ub = nums.size() - 1;

        while( lb <= ub ){
            int mid = lb + (ub - lb ) / 2;
            if(nums[mid] == target){
                ans = mid;
                return ans;
            }
            else if(nums[mid] < target){
                lb = mid + 1;
            } 
            else{
                ub = mid - 1;
            }
        }
        
        return ans;
    }
};