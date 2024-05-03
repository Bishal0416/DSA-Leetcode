class Solution {
public:
    vector<string> getTokens( string &str ){
        vector<string> tokens;
        stringstream tokenizer(str);
        string token;
        while(getline(tokenizer, token, '.')){
            tokens.push_back(token);
        }
        return tokens;
    }

    int compareVersion(string version1, string version2) {
        vector<string>  v1 = getTokens(version1);
        vector<string>  v2 = getTokens(version2);

        int n = v1.size();
        int m = v2.size();
        int mx = max(n, m);
        int i = 0;
        while(i < mx){
            int a = i < n ? stoi(v1[i]) : 0;
            int b = i < m ? stoi(v2[i]) : 0;
            if(a < b) return -1;
            else if(a > b) return 1;
            else i++;
        }
        return 0;

    }
};