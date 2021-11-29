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
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode *start;
        start = NULL;
        ListNode *temp;
        temp = head;
        ListNode *newnode;
        newnode = NULL;
        ListNode *t;
        t = NULL;
        int x;
        if (head != NULL)
        {
            x = head -> val;
        }
        newnode = new ListNode();
        newnode -> val = x;
        newnode -> next = NULL;
        start = newnode;
        t = start;
        while (temp != NULL)
        {
           
            if (x != temp -> val)
            {
                newnode = new ListNode();
                newnode -> val = temp -> val;
                newnode -> next = NULL;
                t -> next = newnode;
                t = newnode;
                
            }
             x = temp -> val;
            temp = temp -> next;
        }
        if (head == NULL)
        {
            start = NULL;
        }
        return start;
    }
};