class Solution {
public:
    int findCenter(vector<vector<int>>& edges) {
        int c = 0,x;
        map <int, int> m;
         for (int i = 0; i < edges.size(); i ++)
        {
            for (int j = 0; j < edges[i].size(); j ++)
            {
                m[edges[i][j]] = 0;
            }
        }
        for (int i = 0; i < edges.size(); i ++)
        {
            for (int j = 0; j < edges[i].size(); j ++)
            {
                m[edges[i][j]]++;
                if (m[edges[i][j]] == m.size()-1)
                {
                    x = edges[i][j];
                    break;
                }
            }
        }
        return x;
    }
};