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
    ListNode* swapPairs(ListNode* head) {
        ListNode *start = NULL, *temp = NULL, *newnode = NULL, *ptr = NULL, *last = NULL;
        int cnt = 1, count = 0;
        temp = head;
        while (temp != NULL)
        {
            count ++;
            temp = temp -> next;
        }
        if (head == NULL)
        {
            start = NULL;
        }
        else if (head -> next == NULL)
        {
            newnode = new ListNode ();
            newnode -> next = NULL;
            newnode -> val = head -> val;
            start = newnode;
        }
        else
        {
            temp = head;
            ptr = head -> next;
            while (temp != NULL && ptr != NULL)
            {
                newnode = new ListNode();
                newnode -> next = NULL;
                if (cnt % 2 != 0)
                {
                    newnode -> val = ptr -> val;
                    if (ptr -> next != NULL)
                    {
                         ptr = (ptr -> next) -> next;
                    }
                    else
                    {
                        ptr = NULL;
                    }
                }
                else
                {
                    newnode -> val = temp -> val;
                    if (temp -> next != NULL)
                    {
                         temp = (temp -> next) -> next; 
                    }
                    else
                    {
                        temp = NULL;
                    }
                }
                if (start == NULL)
                {
                    start = newnode;
                    last = start;
                }
                else
                {
                    last -> next = newnode;
                    last = newnode;
                }
                cnt ++;
                
               
            }
            if (count % 2 == 0)
            {
                newnode = new ListNode();
                newnode -> next = NULL;
                newnode -> val = temp -> val;
                last -> next = newnode;
                last = newnode;
            }
            else
            {
                newnode = new ListNode();
                newnode -> next = NULL;
                newnode -> val = temp -> val;
                last -> next = newnode;
                last = newnode;
                temp = (temp -> next) -> next;
                newnode = new ListNode();
                newnode -> next = NULL;
                newnode -> val = temp -> val;
                last -> next = newnode;
                last = newnode;
            }
        }
        return start;
    }
};