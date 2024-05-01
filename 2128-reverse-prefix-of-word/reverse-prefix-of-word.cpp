class Solution {
public:
    string reversePrefix(string word, char ch) {
        int n = word.size();
        int end = 0;
        for(int i = 0;i < n; i++){
            if(word[i] == ch){
                end = i;
                break;
            }
        }

        int i = 0, j = end;
        while(i<j){
            swap(word[i], word[j]);
            i++;
            j--;
        }
        return word;
    }
};