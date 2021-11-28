class Solution {
public:
    int thirdMax(vector<int>& nums) {
       sort(nums.begin(), nums.end());
        reverse(nums.begin(), nums.end());
        int max = nums[0];
        int second_max = max;
        int third_max = max;
        for (auto i = nums.begin(); i != nums.end(); i ++)
        {
            if (*i != max)
            {
                second_max = *i;
                break;
            }
        }
        for (auto i = nums.begin(); i != nums.end(); i ++)
        {
            if (*i != second_max && *i != max)
            {
                third_max = *i;
                break;
            }
        }
        int res;
        if (third_max != max)
        {
            res = third_max;
        }
        else
        {
            res = max;
        }
        return res;
    }
};