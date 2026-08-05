class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        vector<int> mp(256 , -1);
        int l = 0;
        int res = 0;
        for(int r = 0; r < s.length(); r++)
        {
            if(mp[s[r]] >= l)
            {
                l = mp[s[r]] + 1;
            }
            mp[s[r]] = r;
            res = max(res , r - l + 1);
        }
        return res;
    }
};
