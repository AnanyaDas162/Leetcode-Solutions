class Solution {
public:
    int Min=INT_MAX, Max=INT_MIN;
    void solve (vector <int> nums){
        for (int i = 0; i < nums.size() && nums.size() > 1; i ++){
            if (i == 0){
                if (nums[i] > nums[i+1]){
                    Min = min (Min, nums[i]);
                    Max = max (Max, nums[i]);
                }
            }
            else if (i == nums.size()-1){
                if (nums[i] < nums[i-1]){
                    Min = min (Min, nums[i]);
                    Max = max (Max, nums[i]);
                }
            }
            else if (nums[i] < nums[i-1] || nums[i] > nums[i+1]){
                Min = min (Min, nums[i]);
                Max = max (Max, nums[i]);
            }
        }
    }
    int findUnsortedSubarray(vector<int>& nums) {
        solve (nums);
        int k=0, j=0, l=0;
        int i;
        for (i = 0; i < nums.size() && nums[i]<=Min; i ++);
        for (j = nums.size()-1; j >= 0 && nums[j] >=Max; j --);
        if ((Min == INT_MAX && Max == INT_MIN) || (nums.size() == 1)){
            l = 0;
        }
        else{
            l = j-i+1;
        }
        return l;
    }
};