class Solution {
public:
    int appendCharacters(string s, string t) {
        int n = s.size();
        int m =  t.size();

        int i = 0, j =0;

        while(i < n){
            if(s[i] == t[j]){
                i++;
                j++;
                if( j == m) break;
            }
            else i++;
        }
        return m- j;
    }
};