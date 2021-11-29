class Solution {
public:
    int singleNumber(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int x = nums[0], res, count = 0;
        for(auto i = nums.begin(); i != nums.end(); i ++)
        {
            if (x != *i)
            {
                if (count == 1)
                {
                    res = x;
                    break;
                }
               count = 1;
            }
            else if (x == *i)
            {
                count ++;
            }
            x = *i;
        }
        return res;
    }
};