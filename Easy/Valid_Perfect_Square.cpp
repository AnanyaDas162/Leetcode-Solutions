class Solution {
public:
    bool isPerfectSquare(int num) {
        int check = 0;
        bool x;
        for (long long int i = 0; i <= num/2; i ++)
        {
            if (i * i == num)
            {
                check = 1;
                break;
            }
        }
        if (num == 0)
        {
            x = true;
        }
        else if (num == 1)
        {
            x = true;
        }
        else if (check == 1)
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