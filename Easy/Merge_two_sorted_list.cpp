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
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
       ListNode *temp;
        temp = NULL;
        temp = l1;
        while (l1 != NULL && temp -> next != NULL)
        {
            temp = temp -> next;
        }
        if (l1 != NULL)
        {
             temp -> next = l2;
        }
        temp = l1;
        ListNode *ptr;
        ptr = l1;
        int min;
        if (l1 != NULL)
        {
             min = l1 -> val;
        }
        else if (l2 != NULL && l1 == NULL)
        {
            min = l2 -> val;
            l1 = l2;
        }
        while (temp != NULL)
        {
            ptr = temp -> next;
            while (ptr != NULL)
            {
                if (ptr -> val < temp -> val)
                {
                     swap (ptr -> val, temp -> val);
                }
                ptr = ptr -> next;
            }
            temp = temp -> next;
        }
        return l1;
    }
};