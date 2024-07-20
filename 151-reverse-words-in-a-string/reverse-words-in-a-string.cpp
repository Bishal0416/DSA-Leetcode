class Solution {
public:
    string reverseWords(string s) {
        int n = s.length();
        stack<char> st;
        string res;
        int i = n-1;
        while(i >= 0){
            if(st.empty() && s[i] == ' '){
                i--;
                continue;
            }

            else if( !st.empty() && s[i] == ' '){
                  if( !res.empty()){
                        res += ' ';
                    }
                while(!st.empty()){
                    char temp = st.top();
                    res += temp;
                    st.pop();
                }
            }

            else if(s[i] != ' '){
                st.push(s[i]);
            }
            i--;
        }

        if( !st.empty()){
            if( !res.empty()){
                res += ' ';
            }
            
            while( !st.empty() ){
                char temp = st.top();
                res += temp;
                st.pop();       
            }
        }
        
        
        return res;
    }
};