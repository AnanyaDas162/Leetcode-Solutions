class Solution {
public:
    vector <int> v;
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int l = 0, t = 0, r = matrix[0].size(), b = matrix.size();
        while (l < r && t < b){
            for (int i = l; i < r; i ++){
                v.push_back(matrix[t][i]);
            }
            r --;
            for (int i = t+1; i < b; i ++){
                v.push_back(matrix[i][r]);
            }
            b --;
            if (!((l < r) && (t < b))){
                break;
            }
            for (int i = r-1; i >= l; i --){
                v.push_back(matrix[b][i]);
            }
            t ++;
            for (int i = b-1; i >= t; i --){
                v.push_back(matrix[i][l]);
            }
            l ++;
        }
        return v;
    }
};