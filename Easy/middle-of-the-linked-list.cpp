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
    ListNode* middleNode(ListNode* head) {
        ListNode *temp;
        temp = NULL;
        temp = head;
        int count = 0;
        while (temp != NULL)
        {
            count ++;
            temp = temp -> next;
        }
        temp = head;
        if (count % 2 != 0)
        {
            for (int i = 1; i <= (count / 2); i ++)
            {
                temp = temp -> next;
            }
        }
        else
        {
            for (int i = 1; i <= (count / 2); i ++)
            {
                temp = temp -> next;
            }
        }
        return temp;
    }
};