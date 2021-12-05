class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int sum =0;
       for (auto i = nums.begin(); i != nums.end(); i ++)
       {
           sum = sum + *i;
       }
        int x = 0, res, c = 0;
       for (int i = 0; i < nums.size(); i ++)
       {
           sum = sum - nums[i];
           
           if (sum == x)
           {
               res = i;
               c = 1;
               break;
           }
           x = x + nums[i];
       }
        if (c == 0)
        {
            res = -1;
        }
        return res;
    }
};