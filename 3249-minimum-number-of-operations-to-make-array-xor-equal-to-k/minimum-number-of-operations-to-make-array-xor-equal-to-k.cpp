class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
        int total_xor = 0;
        for(int i = 0; i < nums.size(); i++){
            total_xor ^= nums[i];
        }
        int diff = total_xor  ^ k;
        return __builtin_popcount(diff);
    }
};