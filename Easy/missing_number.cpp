class Solution {
public:
    int missingNumber(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int n = nums.size();
        int res;
        int j = 0;
        for (auto i = nums.begin(); i != nums.end(); i ++)
        {
            if (*i != j)
            {
                res = j;
                break;
            }
            j ++;
        }
        return res;
    }
};