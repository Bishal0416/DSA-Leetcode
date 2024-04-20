class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
        sort(nums1.begin(), nums1.end());
        sort(nums2.begin(), nums2.end());


        vector<vector<int>> res;

        vector<int> one;
        vector<int> two;


        int n = nums1.size();
        int m = nums2.size();

        for(int i=0; i<n; i++){
            int flag = 0;
            for(int j=0; j<m; j++){
                if(nums1[i] == nums2[j]){
                    flag = 1;
                    break;
                }
            }
            if(flag == 0){
                if(!empty(one) && one.back() == nums1[i]);
                else one.push_back(nums1[i]);
            }
        }
        res.push_back(one);

        for(int i=0; i<m; i++){
            int flag = 0;
            for(int j=0; j<n; j++){
                if(nums2[i] == nums1[j]){
                    flag = 1;
                    break;
                }
            }
            if(flag == 0){
                if(!empty(two) && two.back() == nums2[i]);
                else two.push_back(nums2[i]);
            }
        }
        res.push_back(two);

        return res;
    }
};