class Solution {
public:
    int maxProfit(vector<int>& prices) {
       int min = INT_MAX, max = -1, p = 0;
        for (int i = 0; i < prices.size(); i ++){
            if (prices[i] < min){
                min = prices[i];
            }
            if (prices[i] > min){
                max = prices[i];
                if (max - min > p){
                    p = max - min;
                }
            }
        }
        return p;
    }
};
//https://leetcode.com/problems/best-time-to-buy-and-sell-stock/
//problem - 6