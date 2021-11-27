class Solution {
public:
    void reverseString(vector<char>& s) {
        vector<char>v;
        int j = 0;
        for (int i = s.size()-1; i >= 0; i --)
        {
           v.push_back(s[i]);
        }
        s.clear();
        s = v;
    }
};