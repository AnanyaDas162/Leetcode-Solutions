class Solution {
public:
    int getMaximumGenerated(int n) {
        vector <int> v;
        v.push_back(0);
        v.push_back(1);
        int x;
        for (int i = 2; i <= n; i ++){
            if (i%2 == 0){
                x = v[i/2];
            }
            else{
                x = v[i/2] + v[(i/2) + 1];
            }
            v.push_back(x);
        }
         int max;
         if (n == 0){
             max = 0;
         }
        else{
              max = *max_element(v.begin(), v.end());
        }
        return max;
    }
};