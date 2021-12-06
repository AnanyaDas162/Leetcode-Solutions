class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        vector <int> v;
        for (auto i = nums.begin(); i != nums.end(); i ++)
        {
            if (*i % 2 == 0)
            {
                v.push_back(*i);
            }
        }
        for (auto i = nums.begin(); i != nums.end(); i ++)
        {
            if (*i % 2 != 0)
            {
                v.push_back(*i);
            }
        }
        return v;
    }
};