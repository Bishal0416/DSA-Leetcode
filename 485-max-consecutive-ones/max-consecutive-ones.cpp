class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int n = nums.size();
        int i =0, j =0;
        int res = INT_MIN;
        // int temp = 0;
        while(j < n){
            if(nums[j] == 0){
                i = j+1;
            }
            int len = j-i+1; 
            res = max(res, len);
            j++;
        }
        return res;
    }
};