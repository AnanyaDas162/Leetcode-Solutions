class Solution {
public:
    bool detectCapitalUse(string word) {
        int cnt = 0, count = 0, cnt2 = 0, cnt3 = 0, index = -1;
        bool res;
        for (int i = 0; word[i] != '\0'; i ++)
        {
            if (word[i] >= 65 && word[i] <= 90)
            {
                index = i;
                cnt ++;
            }
            else if (word[i] >= 97 && word[i] <= 122)
            {
                cnt2 ++;
            }
            count ++;
        }
        if (cnt == count)
        {
            res = true;
        }
        else if (cnt2 == count)
        {
            res = true;
        }
        else if (cnt == 1 && index == 0)
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