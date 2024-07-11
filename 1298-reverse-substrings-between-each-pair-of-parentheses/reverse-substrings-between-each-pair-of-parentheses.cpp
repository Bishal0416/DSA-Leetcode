class Solution {
public:
    string reverseParentheses(string s) {
        stack<char> st;
        int n =  s.size();
        string temp = "";
        for(int i = 0; i < n; i++){
            if(s[i] == ')'){
                temp = "";
                while(st.top() != '('){
                    temp += st.top();
                    st.pop();
                }
                st.pop();
                int k = temp.size();
                for(int j = 0; j < k; j++){
                    st.push(temp[j]);
                }           
            }
            else{
                st.push(s[i]);
            }
        }

        string res;

        // res = temp;
        while(!st.empty()){
            res += st.top();
            st.pop();
        }
        reverse(res.begin(), res.end());
        return res;
    }
};