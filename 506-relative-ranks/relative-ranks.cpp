class Solution {
public:
    vector<string> findRelativeRanks(vector<int>& score1) {
        vector<int> score = score1;
        sort(score.begin(), score.end(), greater<int>());

        map<int, string> mp;

        for(int i = 0; i < score.size(); i++){
            if(i == 0) {
                mp[score[i]] = "Gold Medal";
            }
            else if(i == 1 ){
                mp[score[i]] = "Silver Medal";
            }
            else if(i == 2 ){
                mp[score[i]] = "Bronze Medal";
            }
            else{
                mp[score[i]] = to_string(i+1);
            }
        }

        vector<string> res;

        for(int i = 0; i < score.size(); i++){
            string temp = mp[score1[i]];
            res.push_back(temp);
        }

        return res;

    }
};