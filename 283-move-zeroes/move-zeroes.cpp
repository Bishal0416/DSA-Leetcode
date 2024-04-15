class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int n = nums.size();
        int i = 0;
        int j = 0;

        int zero_idx, non_zero_idx;

        while(j<n){
            if(nums[j] != 0){
                swap(nums[i], nums[j]);
                i++;j++;
            }
            else{
                j++;
            }
        }
    }
};