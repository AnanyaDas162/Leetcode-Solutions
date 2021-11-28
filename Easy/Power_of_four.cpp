class Solution {
public:
    bool isPowerOfFour(int n) {
        bool x;
        double res = -1;
        if (n > 0)
        {
            res = log(n) / log (4);
        }
        if (res == -1)
        {
            x = false;
        }
        else if ((long long int)res == res && res >= 0)
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