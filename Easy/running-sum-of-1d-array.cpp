class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        vector <int> sum;
        int s = 0;
        for (auto i = nums.begin(); i != nums.end(); i ++){
            s = s + *i;
            sum.push_back(s);
        }
        return sum;
    }
};