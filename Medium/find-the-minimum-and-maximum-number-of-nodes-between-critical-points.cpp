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
    vector<int> nodesBetweenCriticalPoints(ListNode* head) {
        vector <int> v1;
        vector <int> v2;
        ListNode *t1 = NULL, *t2 = NULL;
        t1 = head, t2 = head -> next;
        int i = 2, index = -1, min = 0, max = 0;
        while (t2 -> next != NULL)
        {
            if (t1 -> val > t2 -> val && (t2 -> next) -> val > t2 -> val)
            {
                v1.push_back(i);
            }
            else if (t1 -> val < t2 -> val && (t2 -> next) -> val < t2 -> val)
            {
                v1.push_back(i);
            }
            i ++;
            t1 = t1 -> next;
            t2 = t2 -> next;
        }
        if (v1.empty() == true || v1.size() == 1)
        {
            v2.push_back (-1);
            v2.push_back(-1);
        }
        else
        {
            max = v1[v1.size()-1] - v1[0];
            min = v1[v1.size() - 1] - v1[0];
            for (int i = 0; i < v1.size()-1; i ++)
            {
                if (min > v1[i + 1] - v1[i])
                {
                    min = v1[i + 1] - v1[i];
                }
            }
            v2.push_back (min);
            v2 .push_back (max);
        }
        return v2;
    }
};