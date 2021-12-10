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
       ListNode *t1 = l1;
        ListNode *t2 = l2;
        ListNode *head = NULL;
        ListNode *newnode = NULL;
        ListNode *temp = NULL;
        int carry = 0, sum = 0;
        while (t1 != NULL && t2 != NULL)
        {
            if (t1 != NULL && t2 != NULL)
            {
                sum = (t1 -> val + t2 -> val + carry) % 10;
            }
            newnode = new ListNode();
            newnode -> val = sum;
            newnode -> next = NULL;
            if (head == NULL)
            {
                head = newnode;
                temp = newnode;
            }
            else
            {
                temp -> next = newnode;
                temp = newnode;
            }
             if (t1 -> val + t2 -> val + carry >= 10)
            {
                carry = 1;
                //sum = (t1 -> val + t2 -> val) % 10;
            }
            else
            {
                carry = 0;
                //sum = (t1 -> val + t2 -> val) % 10;
            }
            t1 = t1 -> next;
            t2 = t2 -> next;
        }
       while (t1 != NULL)
       {
           sum = (t1 -> val + carry) % 10;
           newnode = new ListNode();
           newnode -> val = sum;
           newnode -> next = NULL;
           temp -> next = newnode;
           temp = newnode;
           if (t1 -> val + carry >= 10)
               carry = 1;
           else
               carry = 0;
            t1 = t1 -> next;
       }
        while (t2 != NULL)
        {
           sum = (t2 -> val + carry) % 10;
           newnode = new ListNode();
           newnode -> val = sum;
           newnode -> next = NULL;
           temp -> next = newnode;
           temp = newnode;
           if (t2 -> val + carry >= 10)
               carry = 1;
           else
               carry = 0;
            t2 = t2 -> next;
        }
        if (carry == 1)
        {
            newnode = new ListNode();
            newnode -> val = 1;
            newnode -> next = NULL;
            temp -> next = newnode;
            temp = newnode;
        }
        return head;
    }
};