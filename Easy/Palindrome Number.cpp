class Solution {
public:
    bool isPalindrome(int x) {
        long long int y, sum = 0;
        long long int n = x;
        while (x > 0)
        {
            y = x % 10;
            sum = sum * 10 + y;
            x = x / 10;
        }
        if (n == sum)
            return true;
        else
            return false;
    }
};