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
    int getDecimalValue(ListNode* head) {
        ListNode *temp = head, *newnode = NULL, *start = NULL;
        while (temp != NULL)
        {
            newnode = new ListNode ();
            newnode -> next = NULL;
            newnode -> val = temp -> val;
            if (start == NULL)
            {
                start = newnode;
            }
            else
            {
                newnode -> next = start;
                start = newnode;
            }
            temp = temp -> next;
        }
        int a = 0, i = 0;
        temp = start;
        while (temp != NULL)
        {
            a = a + ((temp -> val) * pow (2, i));
            i ++;
            temp = temp -> next;
        }
        return a;
    }
};