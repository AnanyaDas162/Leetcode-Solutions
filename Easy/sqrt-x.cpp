class Solution {
public:
    int mySqrt(int x) {
        long long int a;
        for (long long int i = 0; i <= x / 2; i ++)
        {
            if (i * i == x)
            {
                a = i; 
                break;
            }
            else if (i * i > x)
            {
                a = i - 1;
                break;
            }
        }
        if (x == 1)
        {
            a = 1;
        }
        return a;
    }
};