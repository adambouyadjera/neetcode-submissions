class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_set<char> charSet;
        int l = 0;
        int res = 0;
        for(int r = 0; r < s.length(); r++)
        {
            while(charSet.contains(s[r])) // does s[r] exist in current window set
            {
                charSet.erase(s[l]); // removes char at the left ptr from the set, window is shrinking from the left
                l++; //narrowing the window until s[r] is no longer a duplicate
            }
            charSet.insert(s[r]); //all duplicates of s[r] have been removed, add s[r] to set
            res = max(res, r - l + 1); //r-l+1: size of current valid window
        }
        return res;
    }
};
