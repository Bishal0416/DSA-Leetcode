class Solution {
public:
    int equalPairs(vector<vector<int>>& grid) {

//----------------------------------O(n^3)----------------------------------------//
        // int n = grid.size();
        // int count = 0;

        // for(int i=0; i<n; i++){
        //     for(int j=0; j<n; j++){
        //         bool match = true;
        //         for(int k=0; k<n; k++){
        //             if(grid[i][k] != grid[k][j]){
        //                 match = false;
        //                 break;
        //             }
        //         }
        //         if(match) count++;
        //     }
        // }
        // return count;

//---------------------------------O(n^2) + O(n^2)---------------------------------------//
        int n = grid.size();
        int count = 0;
        map<vector<int>, int> prev;

        for(int i=0; i<n; i++){
            prev[grid[i]]++;
        }

        for(int i =0; i<n; i++){
            vector<int> temp;
            for(int j=0; j<n; j++){
                temp.push_back(grid[j][i]);
            }
            count += prev[temp];
        }
        return count;
    }
};