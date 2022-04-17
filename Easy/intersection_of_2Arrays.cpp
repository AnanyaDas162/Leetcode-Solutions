class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        sort(nums1.begin(), nums1.end());
        sort(nums2.begin(), nums2.end());
        
        
        auto it1 = unique(nums1.begin(), nums1.end());
        auto it2 = unique(nums2.begin(), nums2.end());
        
        
        nums1.resize(distance(nums1.begin(),it1));
        nums2.resize(distance(nums2.begin(),it2));
        
        
        vector <int> v;
        int n1 = nums1.size(), n2 = nums2.size();
        
        
        if (n1 >= n2)
        {
            for (auto i = nums1.begin(); i != nums1.end(); i ++)
            {
                for (auto j = nums2.begin(); j != nums2.end(); j++)
                {
                    if (*i == *j)
                    {
                        v.push_back(*i);
                    }
                    if (*j > *i)
                    {
                        break;
                    }
                }
            }
        }
        else
        {
             for (auto i = nums2.begin(); i != nums2.end(); i ++)
            {
                for (auto j = nums1.begin(); j != nums1.end(); j++)
                {
                    if (*i == *j)
                    {
                        v.push_back(*i);
                    }
                }
            }
        }
        return v;
    }
};