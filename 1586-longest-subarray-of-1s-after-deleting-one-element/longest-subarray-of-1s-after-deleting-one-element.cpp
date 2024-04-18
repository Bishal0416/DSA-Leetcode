class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int n  = nums.size();
        int i =0, j=0;
        int len =0;
        int skip =0;
        int k=1;

        while(j<n){
            if(nums[j] != 1){
                skip++;
            }
            while(skip > k){
                if(nums[i] != 1){
                    skip--;
                }
                i++;
            }

            len = max(len, j-i+1);
            j++;
        }

        return len-1;
    }
};