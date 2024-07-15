class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int mini = INT_MAX, maxi = INT_MIN;
        int n =  piles.size();

        for(int i = 0; i < piles.size(); i++){
            if(piles[i] > maxi) maxi = piles[i];
        }
        if( n == h) return maxi;
        int start = 1;
        int end = maxi;
        int mid;
        int ans = INT_MAX;


        while(start <= end) {
            mid = start + ( end - start ) / 2;

            long long time = 0;
            for(int j = 0; j < n; j++) {
                time += ceil((double)(piles[j]) / (double)(mid));
            }

            if(time <= h) {
                ans = min(ans, mid);
            }

            if(time > h) start = mid + 1;
            else end = mid - 1;
        }
        return ans;
    }
};