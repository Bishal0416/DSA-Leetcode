class Solution {
public:
    int maxVowels(string s, int k) {
         int ptr1 = 0, ptr2 = 0, count = 0, maxi = INT_MIN;
        while(ptr2 < s.size()) {
            if(ptr2 - ptr1 == k) {
                maxi = max(count, maxi);
                if(maxi == k)
                    return count;
                if(isVowel(s[ptr1++]))
                    count--;
                if(isVowel(s[ptr2++]))
                    count++;

            } else {
                if(isVowel(s[ptr2]))
                    count++;
                ptr2++;
            }
        }
        maxi = max(count, maxi);
        return maxi;
    }

    bool isVowel(char ch){
        return ch == 'a' || ch == 'e' || ch =='i' || ch =='o' || ch=='u';
    }
};