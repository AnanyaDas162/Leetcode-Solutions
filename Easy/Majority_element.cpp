class Solution {
public:
    int majorityElement(vector<int>& nums) {
        sort (nums.begin(), nums.end());
        int count = 0, a, b = nums[0];
        for (auto i = nums.begin(); i != nums.end(); i ++)
        {
             if (b != *i)
            {
                count = 0;
            }
            count ++;
            if (count > nums.size() / 2)
            {
                a = *i;
                break;
            }
          
            b = *i;
        }
        return a;
    }
};