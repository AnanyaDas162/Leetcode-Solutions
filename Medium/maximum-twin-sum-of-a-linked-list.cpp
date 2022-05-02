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
    vector <int> v1, v2;
    int pairSum(ListNode* head) {
        ListNode *temp = head;
        int index = 0, n = 0;
        while (temp){
            n ++;
            temp = temp -> next;
        }
        temp = head;
        while (index <= (n/2)-1){
            v1.push_back(temp -> val);
            temp = temp -> next;
            index ++;
        }
        while (index < n){
            v2.push_back(temp -> val);
            temp = temp -> next;
            index ++;
        }
        int sum = 0;
        for (int i = 0, j = v2.size()-1; i < v1.size(); i ++, j --){
            if (v1[i] + v2[j] > sum){
                sum = v1[i] + v2[j];
            }
        }
        return sum;
    }
};