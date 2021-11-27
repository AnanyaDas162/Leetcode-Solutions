class Solution {
public:
    int addDigits(int num) {
        int result;
      if (num == 0)
      {
          result = 0;
      }
      else if (num % 9 == 0)
      {
          result = 9;
      }
      else
      {
          result = num % 9;
      }
      cout<<result;
      return result;
    }
};