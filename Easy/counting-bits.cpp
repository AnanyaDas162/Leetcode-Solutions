class Solution {
public:
    vector<int> countBits(int n) {
        vector <int> v;
        int a = 0, b = 1, c = 1, d = 2;
         if (n >= 0){
              v.push_back(a);
         }
         if (n >= 1){
               v.push_back(b);
         }
         if (n >= 2){
              v.push_back(c);
         }
         if (n >= 3){
              v.push_back(d);
         }
         int temp;
        for (int i = 4; i <= n; i ++){
             float m = (log (i)) / (log (2));
             if (ceil(m) == floor(m)){
                  temp = 0;
             }
             v.push_back(v[temp] + 1);
             temp ++;
        }
        return v;
    }
};