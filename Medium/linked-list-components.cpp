/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    int cnt = 0, check = 0;
    
    int numComponents(ListNode* head, vector<int>& nums) {
        ListNode *temp = head;
        sort (nums.begin(), nums.end());
        while (temp != NULL){
            if (binary_search(nums.begin(), nums.end(),temp -> val)){
                if (!check)
                {
                    cnt ++;
                }
               check = 1;
            }
            else
            {
               check = 0;
            }
            temp = temp -> next;
        }
        return cnt;
    }
};