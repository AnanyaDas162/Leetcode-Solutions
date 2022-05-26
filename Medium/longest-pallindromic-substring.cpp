class Solution {
public:
    
    string longestPalindrome(string s) {
        int n = s.length();
        int dp[n][n];
        for (int i = 0; i < n; i ++){
            dp[i][i] = 1;
        }
        for (int i = 0; i < n-1; i ++){
            if (s[i] == s[i+1]){
                dp[i][i+1] = 1;
            }
            else{
                dp[i][i+1] = -1;
            }
        }
        int k = 0, m = 0;
        for (int i = 0; i < n-2; i ++){
            k = 0;
            for (int j = 2+m; j < n; j ++){
                if (s[k] == s[j] && dp[k+1][j-1] == 1){
                    dp[k][j] = 1;
                }
                else{
                    dp[k][j] = -1;
                }
                 k ++;
            }
            m ++;
        }
        int start = -1, end = -1, max = -1;
        for (int i = 0;i < n; i++){
            for (int j = i; j< n; j++){
                if (dp[i][j] == 1){
                    if (abs(j-i) > max){
                        max = abs(j-i);
                        start = i;
                        end = j;
                    }
                }
            }
        }
        string t;
        for (int i = start; i <= end; i ++){
            t.push_back(s[i]);
        }
        return t;
    }
};