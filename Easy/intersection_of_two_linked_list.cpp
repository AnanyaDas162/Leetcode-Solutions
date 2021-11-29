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
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        vector<ListNode*>v1;
        vector<ListNode*>v2;
        ListNode *temp;
        int check = 0;
        temp = headA;
        while (temp != NULL)
        {
            v1.push_back(temp);
            temp = temp -> next;
        }
        temp = headB;
        while (temp != NULL)
        {
            v2.push_back(temp);
            temp = temp -> next;
        }
        ListNode *ptr;
        ptr = NULL;
        for (auto i = v1.begin(); i != v1.end(); i ++)
        {
            for (auto j = v2.begin(); j != v2.end(); j ++)
            {
                if (*i == *j)
                {
                    ptr = *i;
                    check = 1;
                    break;
                }
            }
            if (check == 1)
            {
                break;
            }
        }
        return ptr;
    }
};