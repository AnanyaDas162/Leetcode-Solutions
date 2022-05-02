class Solution {
public:
    int solve(vector<int>& nums){
        int max_Sum = 0, cur_Sum = 0;//Kadens Algorithm
        for (int i = 0; i < nums.size(); i ++){
            cur_Sum += nums[i];
            if (cur_Sum > max_Sum){
                max_Sum = cur_Sum;
            }
            if (cur_Sum < 0){
                cur_Sum = 0;
            }
        }
        return max_Sum;
    }
    int maxSubArray(vector<int>& nums) {
        int n = 0, max_Sum = 0;
        for (int i = 0; i < nums.size(); i ++){
            if (nums[i] < 0){
                n ++;
            }
        }
        if (n == nums.size()){
            max_Sum = *max_element(nums.begin(), nums.end());
        }
        else{
            max_Sum = solve(nums);
        }
        return max_Sum;
    }
};