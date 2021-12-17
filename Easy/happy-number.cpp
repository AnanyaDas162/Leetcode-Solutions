class Solution {
public:
    bool x;
    int check = 0;
    vector<int>v;
    void isHappy_find(int n) {
        int sum = 0;
        int m = n;
        while (sum != 1)
        {
            sum = 0;
             while (n > 0)
            {
                 sum = sum + pow((n % 10),2);
                 n = n / 10;
            }
            for (auto i = v.begin(); i != v.end(); i ++)
            {
                if (*i == sum)
                {
                    check = 1;
                    break;
                }
            }
            if (check == 1 || sum == 1)
            {
                break;
            }
            v.push_back(sum);
            n = sum;
        }
    }
    bool isHappy(int n)
    {
        
        isHappy_find(n);
        if (check == 1)
        {
            x = false;
        }
        else
        {
            x = true;
        }
        return x;
    }
};