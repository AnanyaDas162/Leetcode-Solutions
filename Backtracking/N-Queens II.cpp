class Solution {
public:
    int count = 0;
    int x[10];
    bool place (int k, int i){
        for (int j = 1; j <= k-1; j ++){
            if (x[j] == i || abs(x[j] - i) == abs(j - k)){
                return false;
            }
        }
        return true;
    }
    void nQueen(int k, int n){
        for (int i = 1; i <= n; i ++){
            if (place(k, i)){
                x[k] = i;
                if (k == n){
                    count ++;
                }
                else{
                    nQueen(k + 1, n);
                }
            }
        }
    }
    int totalNQueens(int n) {
        nQueen(1,n);
        return count;
    }
};