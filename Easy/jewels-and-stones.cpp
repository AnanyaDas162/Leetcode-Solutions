class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        int cnt = 0;
        for (int i = 0; jewels[i] != '\0'; i ++)
        {
            for (int j= 0; stones[j] != '\0'; j ++)
            {
                if (jewels[i] == stones[j])
                {
                    cnt ++;
                }
            }
        }
        return cnt;
    }
};