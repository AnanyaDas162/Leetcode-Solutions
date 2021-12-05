class Solution {
public:
    int dominantIndex(vector<int>& nums) {
        int max = nums[0], index = 0, j=0;
        for (auto i = nums.begin(); i != nums.end(); i ++)
        {
            if (*i > max)
            {
                max = *i;
                index = j;
            }
            j ++;
        }
        vector<int>v;
        for (auto i = nums.begin(); i != nums.end(); i ++)
        {
            if (*i != max)
            {
                v.push_back(*i);
            }
        }
        int cnt = 0;
        for (auto i = v.begin(); i != v.end(); i ++)
        {
            if (*i * 2 <= max)
            {
                cnt ++;
            }
        }
        if (cnt != nums.size()-1)
        {
            index = -1;
        }
        return index;
    }
};