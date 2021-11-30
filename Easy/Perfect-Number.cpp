class Solution {
public:
    bool checkPerfectNumber(int num) {
        int j = 1, sum = 0;
        vector <int> v;
        for (int i = 1; i <= num / 2; i ++)
        {
            if (num % i == 0)
            {
               sum = sum + i;
            }
        }
        bool x;
        if (sum == num)
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