class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int min = arr[0], max = arr[0], index = 0;
        if (arr.size() >= 2)
        {
            if (arr[1] > arr[0])
            {
                for (int i = 0; i < arr.size(); i ++)
                {
                    if (arr[i] < min)
                    {
                        min = arr[i];
                        index = i-1;
                        break;
                    }
                    min = arr[i];
                }
            }
            else
            {
                for (int i = 0; i < arr.size(); i ++)
                {
                    if (arr[i] > max)
                    {
                        max = arr[i];
                        index = i-1;
                        break;
                    }
                    max = arr[i];
                }
            }
        }
        return index;
    }
};