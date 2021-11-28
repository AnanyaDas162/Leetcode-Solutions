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
    ListNode* reverseList(ListNode* head) {
        ListNode *temp;
        ListNode *start;
        ListNode *newnode;
        ListNode *t;
        t = NULL;
        start = NULL;
        newnode = NULL;
        temp = NULL;
        temp = head;
        while (temp != NULL)
        {
            newnode = new ListNode();
            newnode -> val = temp -> val;
            newnode -> next = NULL;
            if (start == NULL)
            {
                start = newnode;
                t = start;
            }
            else
            {
                newnode -> next = t;
                start = newnode;
                t = newnode;
            }
            temp = temp -> next;
        }
        return start;
    }
};