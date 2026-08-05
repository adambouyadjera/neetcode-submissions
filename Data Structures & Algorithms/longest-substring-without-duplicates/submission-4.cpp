class Solution {
public:
    int lengthOfLongestSubstring(string s) {
       vector<int> mp(256, -1);
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

         //store seen char in a bucket
        //make a left pointer and a res
        //loop through s with a r pointer
        //check if s[r] was seen at or after l
        //if it was, move l past s[r] to resolve the duplicate
        //update mp[s[r]] with the newest index r
        //calculate res with the max btw res and r - l + 1. for our current window size
        //then return res
    }
};
