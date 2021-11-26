class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        //vector<int>::iterator i;
        auto i = nums.begin();
        while (i != nums.end())
        {
            if (*i == val)
            {
                i = nums.erase(i);
            } 
            else
            {
                ++i;
            }
        }
        int count = 0;
        for (auto i = nums.begin(); i != nums.end(); i ++)
        {
            count ++;
        }
        cout << count;
        for (auto i = nums.begin(); i != nums.end(); i ++)
        {
            cout << *i;
        }
        return count;
    }
};