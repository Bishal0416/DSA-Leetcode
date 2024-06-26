class Solution {
public:
    string removeStars(string s) {
        stack<char> st;
        for(int i = 0 ; i < s.size(); i++){
            if(s[i]  != '*'){
                st.push(s[i]);
            }
            else{
                st.pop();
            }
        }
        string ans = "";
        while(st.size() != 0){
            ans.push_back(st.top());
            st.pop();

        }
        reverse(ans.begin(), ans.end());
        return ans;
    }
};