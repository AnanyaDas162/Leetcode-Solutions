class Solution {
public:
    string x, y;
    bool backspaceCompare(string s, string t) {
        for (int i = 0; i < s.length(); i ++)
        {
            if (s[i] != '#')
            {
                x.push_back(s[i]);
            }
            else if (x.size() != 0 && s[i] == '#' )
            {
                x.pop_back();
            }
        }
         for (int i = 0; i < t.length(); i ++)
        {
            if (t[i] != '#')
            {
                y.push_back(t[i]);
            }
            else if (y.size() != 0 && t[i] == '#')
            {
                y.pop_back();
            }
        }
        bool res;
        if (x == y)
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