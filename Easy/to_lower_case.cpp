class Solution {
public:
    string toLowerCase(string s) {
        for (int i = 0; s[i] != '\0'; i ++)
        {
            if (s[i] >= 65 && s[i] <= 90)
            {
                s[i] = s[i] + 32;
            }
        }
        return s;
    }
};