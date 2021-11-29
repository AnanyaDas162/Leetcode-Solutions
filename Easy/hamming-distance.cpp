class Solution {
public:
    int hammingDistance(int x, int y) {
        int z;
        z = x ^ y;
        vector <int> v;
        while (z != 0)
        {
            v.push_back(z % 2);
            z = z / 2;
        }
        int cnt =0;
        for (auto i = v.begin(); i != v.end(); i ++)
        {
            if (*i == 1)
            {
                cnt ++;
            }
        }
        return cnt;
    }
};