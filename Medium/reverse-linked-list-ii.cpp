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
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        vector <int> v;
        ListNode *temp = head;
        while (temp != NULL)
        {
            v.push_back(temp -> val);
            temp = temp -> next;
        }
        vector <int> v1;
        for (int i = right-1; i >= left-1; i --)
        {
            v1.push_back(v[i]);
        }
        int cnt = 1;
        temp = head;
        int j = 0;
        while (temp != NULL)
        {
            if (cnt >= left && cnt <= right)
            {
                temp -> val = v1[j];
                j ++;
            }
            cnt ++;
            temp = temp -> next;
        }
        return head;
    }
};