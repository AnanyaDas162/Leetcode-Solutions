class Solution {
public:
    bool isSubsequence(string s, string t) {
        int x = 0, index = 0, c = 0;
       for (int i = 0; i < s.length(); i ++){
           for (int j = index; j < t.length(); j ++){
               if (s[i] == t[j]){
                   x = 1;
                   index = j+1;
                   c ++;
                   break;
               }
               else{
                   x = 0;
               }
           }
           if (x == 0){
               break;
           }
       }
        bool res;
        if (s.length() == 0){
            res = true;
        }
        else if (x == 0){
            res =  false;
        }
        else if (c < s.length()){
            res = false;
        }
        else{
            res = true;
        }
        return res;
    }
};