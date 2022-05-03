class Solution {
public:
    vector <int> v;
    int hoares_left_partition(int low, int high){
        int i = low, j = high + 1, pivot = v[low];
        while (i < j){
            do{
                i = i + 1;
            }while (i <= high && v[i] <= pivot);
            do{
                j = j - 1;
            }while (v[j] > pivot);
            if (i < j){
                int t = v[i];
                v[i] = v[j];
                v[j] = t;
            }
        }
         int t = v[low];
         v[low] = v[j];
         v[j] = t;
        return j;
    }
    void quick_Sort (int low, int high){
       if (low < high){
           int j = hoares_left_partition(low, high);
           quick_Sort(low, j-1);
           quick_Sort(j+1, high);
       }
    }
    void sortColors(vector<int>& nums) {
        //sort(nums.begin(), nums.end());
        int low = 0, high = nums.size()-1;
        v = nums;
        quick_Sort(low, high);
        nums = v;
    }
};