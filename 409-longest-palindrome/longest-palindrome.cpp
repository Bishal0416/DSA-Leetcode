class Solution {
public:
    string oddOrEven(int num){
        if(num % 2 == 0) return "even";
        else return "odd";
    }

    int longestPalindrome(string s) {
int oddFrequencyCount = 0;
        unordered_map<char, int> charFrequency;
        for (char ch : s) {
            charFrequency[ch]++;
            if (charFrequency[ch] % 2 == 1)
                oddFrequencyCount++;
            else
                oddFrequencyCount--;
        }
        if (oddFrequencyCount > 1)
            return s.length() - oddFrequencyCount + 1;
        return s.length();
    }
};