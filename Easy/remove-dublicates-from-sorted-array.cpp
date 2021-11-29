class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        vector <int> v;
        int x;
        if (nums.empty() == false)
        {
            x = nums[0];
            v.push_back(x);
        }
        for (auto i = nums.begin(); i != nums.end(); i ++)
        {
            if (x != *i)
            {
                v.push_back(*i);
            }
            x = *i;
        }
        nums.clear();
        nums = v;
        int count = 0;
        for (auto i = v.begin(); i != v.end(); i ++)
        {
            count ++;
        }
        return count;
    }
};