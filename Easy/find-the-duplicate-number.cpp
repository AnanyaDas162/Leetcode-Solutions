class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        map <int, int> m;
        int x;
        for (int i = 0; i < nums.size(); i ++){
            m[nums[i]] ++;
            if (m[nums[i]] > 1){
                x = nums[i];
                break;
            }
        }
        return x;
    }
};
//https://leetcode.com/problems/find-the-duplicate-number/
//Problem -1