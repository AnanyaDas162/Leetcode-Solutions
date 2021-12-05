class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
        int x = ((int)target - 96) % 26;
        char y, ch;
      
        for (auto i = letters.begin(); i != letters.end(); i ++)
        {
            ch = *i;
            if ((ch - 96) % 26 > x)
            {
               y = *i;
                break;
            }
        }
        if (letters[letters.size()-1] <= target)
        {
            y = letters[0];
        }
        return y;
    }
};