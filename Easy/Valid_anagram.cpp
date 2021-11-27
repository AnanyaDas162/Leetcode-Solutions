class Solution {
public:
    bool isAnagram(string s, string t) {
        map<char,int>m1;
        bool res;
        int count = 0;
        int count2 = 0;
        for (int i = 0; s[i] != '\0'; i ++)
        {
            m1[s[i]]++;
            count ++;
        }
        map<char, int>m2;
        for (int i = 0; t[i] != '\0'; i ++)
        {
            m2[t[i]] ++;
            count2 ++;
        }
        int cnt = 0;
        for (int i = 0; i < count; i ++)
        {
            if (m1[s[i]] == m2[s[i]])
            {
                cnt++;
            }
        }
        int cnt2 = 0;
        for (int i = 0; i < count2; i ++)
        {
            if (m1[t[i]] == m2[t[i]])
            {
                cnt2 ++;
            }
        }
        if (count != count2)
        {
            res = false;
        }
        else if (cnt == count && cnt2 == count)
        {
            res = true;
        }
        else
        {
            res = false;
        }
        return res;
    }
};