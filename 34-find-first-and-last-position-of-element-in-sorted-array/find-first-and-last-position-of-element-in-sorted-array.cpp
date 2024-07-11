class Solution {
private:
    int first(vector<int>& nums, int target) {
        int s = 0, e = nums.size() - 1;
        int mid;
        int ans = -1;
        while(s <= e) {
            mid = s + (e - s)/2 ;
            if(nums[mid] == target) {
                ans = mid;
                e = mid -1;
            }
            else if(nums[mid] < target) s = mid + 1;
            else e = mid - 1;
        }
        return ans;
    }

        int last(vector<int>& nums, int target) {
        int s = 0, e = nums.size() - 1;
        int mid;
        int ans = -1;
        while(s <= e) {
            mid = s + (e - s)/2 ;
            if(nums[mid] == target) {
                ans = mid;
                s = mid + 1;
            }
            else if(nums[mid] < target) s = mid + 1;
            else e = mid - 1;
        }
        return ans;
    }


public:
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int> res;
        int f = first(nums, target);
        int l = last(nums, target);
        res.push_back(f);
        res.push_back(l);
        return res;
    }
};