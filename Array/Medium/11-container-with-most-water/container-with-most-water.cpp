class Solution {
public:
    int maxArea(vector<int>& height) {
        int n = height.size();

        int i=0; int j=n-1;

        int area = INT_MIN;

        while(i<j){
            int width = j - i;
            int heights = min(height[i], height[j]);
            int curr_area = width * heights;

            area = max(area, curr_area);

            if(height[i] > height[j]) j--;
            else i++;
        }

        return area;
    }
};