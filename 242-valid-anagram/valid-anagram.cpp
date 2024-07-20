class Solution {
public:
    bool isAnagram(string s, string t) {
        map<char, int> mp1;
        map<char, int> mp2;

        int n = s.size();
        int m = t.size();

        for(int i = 0; i < n; i++) {
            mp1[s[i]]++;
        }
        for(int i = 0; i < m; i++) {
            mp2[t[i]]++;
        }

        if(mp1.size() != mp2.size()) return false;


        for(int i = 0; i< n; i++) {
            if(mp1[s[i]] != mp2[s[i]]) return false;
        }
        return true;
    }
};