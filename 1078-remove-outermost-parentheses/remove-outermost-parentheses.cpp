class Solution {
public:
    string removeOuterParentheses(string s) {
        int n = s.size();
        stack<char> st;
        int i = 0;
        string ans;
        while(i < n) {
            if(s[i] == '(') {
                if(!st.empty()) {
                    ans.push_back('(');
                }
                st.push('(');
            }
            else {
                if(st.size() > 1) {
                    ans.push_back(')');
                }
                st.pop();
            }

            i++;
        }
        return ans;
    }
};