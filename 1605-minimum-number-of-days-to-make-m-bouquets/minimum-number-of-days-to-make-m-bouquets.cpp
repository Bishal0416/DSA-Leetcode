class Solution {
private :
    bool solve(vector<int>& bloomDay, int boquetReq, int flowerReq, int day) {
        int n =  bloomDay.size();
        int currBoquet = 0;
        int currFlower = 0;
        for(int i = 0 ; i < n; i++){
            if(day >= bloomDay[i]) {
                currFlower++;
                if(currFlower == flowerReq) {
                    currBoquet++;
                    currFlower = 0;
                    if(currBoquet == boquetReq) return true;
                }
            }
            else {
                currFlower = 0;
            }
        }
        return false;
    }
public:
    int minDays(vector<int>& bloomDay, int m, int k) {
        int n =  bloomDay.size();
        int minDay = INT_MAX;
        int maxDay = INT_MIN;
        for(int i = 0; i < n; i++) {
            minDay  = min(minDay, bloomDay[i]);
            maxDay = max(maxDay, bloomDay[i]);
        }
        int start = minDay;
        int end = maxDay;
        int mid;
        int ans = -1;

        while(start <= end) {
            mid = start + (end - start) / 2;
            bool possible = solve(bloomDay, m, k, mid);
            if(possible) {
                ans = mid;
                end = mid - 1;
            }
            else{
                start = mid + 1;
            }
        }
        return ans;
    }
};