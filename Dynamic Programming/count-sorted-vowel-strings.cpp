class Solution {
public:
    int countVowelStrings(int n) {
        vector <int> v (5, 1);
        vector <int> v1 (5, 1);
        int x = 0;
        for (int i = 1; i < n; i ++){
           for (int j = 3; j >= 0; j --){
               v[j] = v[j+1] + v1[j];
           }
            v1 = v;
        }
        for (int i = 0; i < 5; i ++){
            x += v[i];
        }
        return x;
    }
};