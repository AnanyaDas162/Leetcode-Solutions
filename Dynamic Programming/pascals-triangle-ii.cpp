class Solution {
public:
    vector<int> getRow(int rowIndex) {
        vector<int>v;
        int arr[rowIndex+1][rowIndex+1];
        int n= rowIndex+1;
        for (int i = 0; i < n; i ++){
            arr[i][0] = 1;
        }
        for (int i = 0; i < n; i ++){
            arr[i][i] = 1;
        }
        for (int i = 2; i < n; i ++){
            for (int j = 1; j <= i; j ++){
                if (i != j){
                    arr[i][j] = arr[i-1][j] + arr[i-1][j-1];
                }
            }
        }
        v.clear();
        for (int j = 0; j < n; j ++){
            v.push_back(arr[n-1][j]);
        }
        return v;
    }
};