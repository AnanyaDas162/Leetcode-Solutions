class Solution {
public:
    bool hasAlternatingBits(int n) {
        vector <int> v;
        int cnt = 0;
        while (n != 0)
        {
            cnt ++;
            v.push_back(n % 2);
            n = n / 2;
        }
        int a = v[0], b;
        if (cnt > 1)
        {
            b = v[1];
        }
        int count0 = 0, count1 = 0;
        for (int i = 0; i < cnt; i ++)
        {
           if (i % 2 == 0 && v[i] == a)
           {
               count0 ++;
           }
           else if (i % 2 != 0 && v[i] == b)
           {
               count1 ++;
           }
        }
        bool x;
        if (a == b)
        {
            x = false;
        }
        else
        {
            if (cnt % 2 == 0 && count0 == count1 && cnt == count0 + count1)
            {
                x = true;
            }
            else if (cnt % 2 != 0 && (count0 == count1 + 1 || count1 == count0 + 1) && cnt == count0 + count1)
            {
                x = true;
            }
            else
            {
                x = false;
            }
        }
        return x;
    }
};