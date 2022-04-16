class Solution {
public:
  
    int lengthOfLongestSubstring(string s) {
        int len = 0, l = 0, r = 0, max_len = 0;
        map <char, int> m;
        for (int i = 0; i < s.size(); i ++)
        {
            m[s[i]] = -1;
        }
        while (r < s.size())
        {
            if (m[s[r]] >= 0)
            {
                if (max_len < len)
                {
                    max_len = len;
                }
                l = max(m[s[r]] + 1, l);
            }
            m[s[r]] = r;
            len = r-l+1;
            r ++;
        }
        if (max_len < len)
            max_len = len;
        return max_len;
    }
};