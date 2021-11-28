class Solution {
public:
    int countSegments(string s) {
        int count = 0, n = s.length();
        char a = s[0];
        for (int i = 0; s[i] != '\0'; i ++)
        {
            if (s[i] == ' ' && a != ' ')
            {
                count ++;
            }
            a = s[i];
        }
        if (s.length() == 0)
        {
            count = 0;
        }
        else if (s[n- 1] != ' ')
        {
            count = count + 1;
        }
        return count;
    }
};