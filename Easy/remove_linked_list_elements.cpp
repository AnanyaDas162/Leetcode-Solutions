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
    ListNode* removeElements(ListNode* head, int val) {
        ListNode *temp;
        temp = head;
        ListNode *newnode;
        newnode = NULL;
        ListNode *start;
        start = NULL;
        ListNode *t;
        t = NULL;
        while (temp != NULL)
        {
            if (temp -> val != val)
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
                    t -> next = newnode;
                    t = newnode;
                }
            }
            temp = temp -> next;
        }
        return start;
    }
};