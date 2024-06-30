class Solution {
public:
    void rotate(vector<int>& nums, int k) {
            k = k % nums.size();
            int n = nums.size() -1 ;
            int i = 0;
            while(i < n){
                swap(nums[i], nums[n]);
                i++;
                n--;
            }
            i = 0;
            int j = k - 1;
            while(i <= j){
                swap(nums[i], nums[j]);
                i++;
                j--;
            }
            i = k;
            j = nums.size() - 1;
            while(i <= j){
                swap(nums[i], nums[j]);
                i++;
                j--;
            }        
    }
};