class Solution {
public:
    int countDigit(int n){
        int count = 0;
        while (n != 0){
            n = n/10;
            count ++;
        }
        return count;
    }
    int findNumbers(vector<int>& nums) {
        int c = 0;
        for (auto i = nums.begin(); i != nums.end(); i ++){
            if (countDigit(*i) % 2 == 0){
                c ++;
            }
        }
        return c;
    }
};