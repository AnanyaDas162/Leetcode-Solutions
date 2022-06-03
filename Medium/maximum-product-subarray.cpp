class Solution {
public:
    int max(int x, int y){
        if (x > y){
            return x;
        }
        else{
            return y;
        }
    }
    int min(int x, int y){
        if (x > y){
            return y;
        }
        else{
            return x;
        }
    }
    int maxProduct(vector<int>& nums) {
        int n = nums.size();
        long long int ma = nums[0], mi=nums[0], ans = nums[0];
        for (int i = 1; i < n; i ++){
            if (nums[i] < 0){
                swap(ma, mi);
            }
            ma = max(nums[i], nums[i]*ma);
            mi = min(nums[i], nums[i]*mi);
            ans = max(ans, ma);
        }
        return ans;
    }
};