class Solution {
public:
    bool isPalindrome(string s) {
        int l = 0, r = s.length() - 1; //skip the null

        while(l < r) // so l doesnt go past r
        {
            while(l < r && !isalnum(s[l]))
            {
                l++; //skip the non-alnum in the left side
            }
            while(l < r && !isalnum(s[r]))
            {
                r--;//skip the non-alnum on the right side
            }
            if(tolower(s[l]) != tolower(s[r]))
            {
                return false;
            }
            l++;
            r--;
        }
        return true;
    }
};
