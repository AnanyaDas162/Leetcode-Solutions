class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        int n1 = nums1.size(), n2 = nums2.size(), k=0;
        
        
        sort (nums1.begin(), nums1.end());
        sort(nums2.begin(), nums2.end());
        
        
        vector <int> v;
        
        
             for (int i = 0; i < n2; i ++)
            {
                for (int j = k; j < n1; j++)
                {
                    if (nums1[j] == nums2[i])
                    {
                        v.push_back(nums1[j]);
                        k = j+1;
                        //m[nums1[j]] = j;
                         break;
                    }
                     if (nums1[j] > nums2[i])
                    {
                        break;
                    }
                }
            }
        return v;
    }
};