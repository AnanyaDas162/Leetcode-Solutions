class Solution {
public:
    int countSubstrings(string s) {
        int n = s.length();
        int dp[n][n];
        for (int i = 0; i < n; i ++){
            dp[i][i] = 1;//As single characters are alwats palindrome.
        }
        for (int i = 0; i < n-1; i ++){
            if (s[i] == s[i+1]){
                dp[i][i+1] = 1;
            }
            else{
                dp[i][i+1] = 0;//As 2 characters are palindrome if and only if the 2 characters are same.
            }
        }
        int c= 0, m =0;
        for (int i = 0; i < n-2; i ++){
            m = 0;
            for (int j = 2+c; j < n; j ++){
                if (s[m] == s[j] && dp[m + 1][j-1] == 1){
                    dp[m][j] = 1;
                }
                else{
                    dp[m][j] = 0;
                }
                m ++;
            }
            c ++;
        }
        int cnt = 0;
        for (int i = 0; i < n; i ++){
            for (int j = i; j < n; j ++){
                if (dp[i][j]){
                    cnt ++;
                }
            }
        }
        return cnt;
    }
};