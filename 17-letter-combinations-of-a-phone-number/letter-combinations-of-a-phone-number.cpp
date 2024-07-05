class Solution {
    void solve(string digits, int index,  vector<string> phone, vector<string> &ans, string output){
        if(digits.size() == index) {
            ans.push_back(output);
            return;
        }
        //get the key preshed value
        int key = digits[index] - '0';
        string alph = phone[key];

        for(int i=0; i<alph.size(); i++){
            output.push_back(alph[i]);
            solve(digits, index+1, phone, ans, output);
            output.pop_back();
        }
    }
public:
    vector<string> letterCombinations(string digits) {
        vector<string> phone = {"", "", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};
        vector<string> ans;
        string output = "";
        int index = 0;
        if(digits.size() == 0) return { };
        solve(digits, index, phone, ans, output);
        return ans;
    }
};