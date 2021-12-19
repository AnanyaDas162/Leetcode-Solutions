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
    void reorderList(ListNode* head) {
        vector <int> v;
        ListNode *temp = head;
        while (temp != NULL)
        {
            v.push_back (temp -> val);
            temp = temp -> next;
        }
        int i = 0, j = v.size() - 1;
        temp = head;
        int cnt = 0;
        while (temp != NULL)
        {
            if (cnt % 2 == 0)
            {
                temp -> val = v[i];
                i ++;
            }
            else
            {
                temp -> val = v[j];
                j --;
            }
            cnt ++;
            temp = temp -> next;
        }
    }
};