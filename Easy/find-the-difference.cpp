class Solution {
public:
    char findTheDifference(string s, string t) {
        map <char, int> m1;
        map <char, int> m2;
        for (int i = 0; s[i] != '\0'; i ++)
        {
            m1[s[i]] ++;
        }
        for (int i = 0; t[i] != '\0'; i ++)
        {
            m2[t[i]] ++;
        }
        char x;
        for (int i = 0; t[i] != '\0'; i ++)
        {
            if ((m1[t[i]] == 0 && m2[t[i]] > 0) || (m2[t[i]] == m1[t[i]] + 1))
            {
                x = t[i];
            }
        }
        return x;
    }
};