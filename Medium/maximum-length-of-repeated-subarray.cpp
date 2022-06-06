class Solution {
public:
    int findLength(vector<int>& nums1, vector<int>& nums2) {
        int n1 = nums1.size(), n2 = nums2.size();
        int dp[n1+1][n2+1];
        int a[n1+1], b[n2+1];
        a[0] = 0, b[0] = 0;
        for (int i = 1; i < n1+1; i ++){
            a[i] = nums1[i-1]; // Putting the array elements to the a array
        }
        for (int i = 1; i <= n2; i ++){
            b[i] = nums2[i-1]; // Putting the array elements to the b array
        }
        for (int i = 0; i < n2+1; i ++){
            dp[0][i] = 0;  // Making the first row null as first array is null
        }
        for (int i = 0; i < n1+1; i ++){
            dp[i][0] = 0; // Making the first column null as the second array is null
        }
        for (int i = 1; i < n1+1; i ++){
            for (int j = 1; j < n2+1; j ++){
                if (a[i] == b[j]){
                    dp[i][j] = dp[i-1][j-1] + 1;
                }
                else{
                    dp[i][j] = 0;
                }
            }
        }
        int m = 0;
        for (int i = 0; i < n1+1; i ++){
            for (int j = 0; j < n2+1; j ++){
                if (dp[i][j] > m){
                    m = dp[i][j];
                }
            }
        }
        return m;
    }
};