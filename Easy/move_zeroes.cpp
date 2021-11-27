class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        vector<int>v;
        int count1 = 0, count2 = 0;
        for (auto i = nums.begin(); i != nums.end(); i ++)
        {
            if(*i != 0)
            {
                v.push_back(*i);
                count1 ++;
            }
            count2 ++;
        }
        for (int i = 0; i < count2 - count1; i ++)
        {
            v.push_back(0);
        }
        nums.clear();
        nums = v;
        
    }
};