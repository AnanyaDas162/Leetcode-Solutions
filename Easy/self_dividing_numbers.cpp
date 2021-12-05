class Solution {
public:
    vector<int> selfDividingNumbers(int left, int right) {
        vector<int>v;
        vector<int>x;
        int y, cnt1=0, cnt2 = 0;
        for (int i = left; i <= right; i ++)
        {
            y = i;
            cnt1 = 0, cnt2 = 0;
            v.clear();
            while (y != 0)
            {
                 cnt1 ++;
                if (y % 10 == 0)
                {
                    break;
                }
                v.push_back(y % 10);
               
                y = y / 10;
            }
            for (auto j = v.begin(); j != v.end(); j ++)
            {
                if (i % *j == 0 && *j != 0)
                {
                    cnt2 ++;
                }
            }
            if (cnt1 == cnt2)
            {
                x.push_back(i);
            }
        }
        return x;
    }
};