class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int count = 0, cnt = 0, max = 0;
        for (auto i = nums.begin(); i != nums.end(); i ++)
        {
            if (*i == 1)
            {
                count ++;
            }
            else if (*i == 0)
            {
                if (count > max)
                {
                    max = count;
                }
                cnt = count;
                count = 0;
            }
        }
        if (count > max)
            max = count;
        
        
        return max;
    }
};