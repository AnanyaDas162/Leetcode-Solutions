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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode *head1 = NULL, *head2 = NULL, *start = NULL, *newnode = NULL, *temp = NULL, *t1 = NULL, *t2 = NULL;
        temp = l1;
        while (temp != NULL)
        {
            newnode = new ListNode ();
            newnode -> next = NULL;
            newnode -> val = temp -> val;
            if (head1 == NULL)
            {
                head1 = newnode;
            }
            else
            {
                newnode -> next = head1;
                head1 = newnode;
            }
            temp = temp -> next;
        }
        temp = l2, newnode = NULL;
        while (temp != NULL)
        {
            newnode = new ListNode ();
            newnode -> next = NULL;
            newnode -> val = temp -> val;
            if (head2 == NULL)
            {
                head2 = newnode;
            }
            else
            {
                newnode -> next = head2;
                head2 = newnode;
            }
            temp = temp -> next;
        }
        temp = NULL, newnode = NULL;
        t1 = head1, t2 = head2;
        int carry = 0;
        while (t1 != NULL && t2 != NULL)
        {
            newnode = new ListNode ();
            newnode -> next = NULL;
            newnode -> val = (t1 -> val + t2 -> val + carry) % 10;
            if (t1 -> val + t2 -> val + carry >= 10)
            {
                carry = 1;
            }
            else
            {
                carry = 0;
            }
            if (start == NULL)
            {
                start = newnode;
            }
            else
            {
                newnode -> next = start;
                start = newnode;
            }
            t1 = t1 -> next;
            t2 = t2 -> next;
        }
        while (t1 != NULL)
        {
            newnode = new ListNode ();
            newnode -> next = NULL;
            newnode -> val = (t1 -> val + carry) % 10;
            if (t1 -> val + carry >= 10)
            {
                carry = 1;
            }
            else
            {
                carry = 0;
            }
            newnode -> next = start;
            start = newnode;
            t1 = t1 -> next;
        }
        while (t2 != NULL)
        {
            newnode = new ListNode ();
            newnode -> next = NULL;
            newnode -> val = (t2 -> val + carry) % 10;
            if (t2 -> val + carry >= 10)
            {
                carry = 1;
            }
            else
            {
                carry = 0;
            }
            newnode -> next = start;
            start = newnode;
            t2 = t2 -> next;
        }
        if (carry == 1)
        {
            newnode = new ListNode ();
            newnode -> next = NULL;
            newnode -> val = 1;
            newnode -> next = start;
            start = newnode;
        }
        return start;
    }
};