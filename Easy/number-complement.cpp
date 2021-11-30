class Solution {
public:
    int findComplement(int num) {
        vector <int> v;
        int cnt = 0;
        while(num != 0)
        {
            cnt ++;
            v.push_back(num % 2);
            num = num / 2;
        }
        vector <int> v1;
        for (int i = cnt - 1; i >= 0; i --)
        {
            if (v[i] == 1)
                v1.push_back(0);
            else
                v1.push_back(1);
        }
        int n = 0, j = 0;
        for (int i = cnt - 1; i >= 0; i --)
        {
            n = n + v1[i] * pow(2, j);
            j ++;
        }
        return n;
    }
};