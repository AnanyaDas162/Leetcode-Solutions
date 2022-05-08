class Solution {
public:
     int c = 0, cur_sum = 0;
    map <int,int> m;
    int subarraySum(vector<int>& nums, int k) {
         for (int i = 0; i < nums.size(); i ++){
            cur_sum = cur_sum + nums[i];
           if (cur_sum  == k){
               c ++;
              
           } 
           if (m.find(cur_sum - k) != m.end()){
               c += m[cur_sum - k];
               
           }
            m[cur_sum] ++;
        }
        return c;
    }
};