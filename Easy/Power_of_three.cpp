class Solution {
public:
    bool isPowerOfThree(int n) {
        bool x;
        if (n <= 0)
        {
            x = false;
        }
        else if (1162261467 % n == 0)
        {
            x = true;
        }
        else
        {
            x = false;
        }
        return x;
    }
};