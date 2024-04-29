class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        map<int, int> mpp;
        for(int i = 0; i<arr.size(); i++){
            mpp[arr[i]]++;
        }
        
        int size = mpp.size();
        vector<pair<int, int> > pairs; 
  
        for (auto& it : mpp) { 
            pairs.push_back(it); 
        }
        sort(pairs.begin(), pairs.end(), [](auto& a, auto& b) { 
            return a.second < b.second; 
        });

        for(int  i = 0; i < size - 1; i++){
            if(pairs[i].second == pairs[i+1].second) return false;
        }
        return true;
    }
};