class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        map <char, int> m1;
        map <char, int> m2;
        for (int i = 0; ransomNote[i] != '\0'; i ++)
        {
            m1[ransomNote[i]] ++;
        }
        for (int i = 0; magazine[i] != '\0'; i ++)
        {
            m2[magazine[i]] ++;
        }
        int count = 0;
        for(int i = 0; ransomNote[i] != '\0'; i ++)
        {
            if (m1[ransomNote[i]] <= m2[ransomNote[i]])
            {
                count ++;
            }
        }
        bool x;
        if (count == ransomNote.length())
        {
            x = true;
        }
        else
        {
            x = false;
        }
        return x;
    }
};