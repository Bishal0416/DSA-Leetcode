class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        string res;

        int n = word1.size();
        int m = word2.size();

        int k = min(n, m);
        
        int i=0;
        int j=0;

        while(i < k){
            res = res + word1[i];
            res = res + word2[i];

            i++;
        }

        while(i < n){
            res = res + word1[i];
            i++;
        }

        while(i < m){
            res = res + word2[i];
            i++;
        }

        return res;
    }
};