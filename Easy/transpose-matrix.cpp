class Solution {
public:
    vector<vector<int>> transpose(vector<vector<int>>& matrix) {
        vector <int> v;
        vector <vector <int> > m;
        int n1 = matrix.size(), n2 = matrix[0].size();
        for (int j = 0; j < n2; j ++){
            v.clear();
            for (auto i = 0; i < n1; i ++){
                v.push_back(matrix[i][j]);
            }
            m.push_back(v);
        }
        return m;
    }
};