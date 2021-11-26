class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        map<int, int>m;
        bool result;
        for (auto i = nums.begin(); i != nums.end(); i ++)
        {
            m[*i] = m[*i] + 1;
        }
        int check = 0;
        for (auto i = m.begin(); i != m.end(); i ++)
        {
            if ((*i).second > 1)
            {
                cout<<"true";
                check = 1;
                result = true;
                break;
            }
        }
        if (check == 0)
        {
            cout << "false";
            result = false;
        }
        return result;
    }
};