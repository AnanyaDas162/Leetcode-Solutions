/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    bool hasCycle(ListNode *head) {
       vector<ListNode*>v;
        bool res;
        int check = 0;
        ListNode *temp;
        temp = head;
        while (temp != NULL)
        {
            for (auto i = v.begin(); i != v.end(); i ++)
            {
                if (temp == *i)
                {
                    check = 1;
                    res = true;
                    break;
                }
            }
            if (check == 1)
            {
                break;
            }
            v.push_back(temp);
            temp = temp -> next;
        }
        if (check == 1)
        {
            res = true;
        }
        else
        {
            res = false;
        }
        return res;
    }
};