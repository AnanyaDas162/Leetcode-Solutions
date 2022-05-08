class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        map<int, int>m;
        for (int i = 0; i < nums.size(); i ++){
            m[nums[i]] ++;
        }
        nums.clear();
        for (auto i = m.begin(); i != m.end(); i ++){
            if ((*i).second == 2){
                nums.push_back((*i).first);
            }
        }
        return nums;
    }
};