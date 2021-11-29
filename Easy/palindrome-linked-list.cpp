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
    bool isPalindrome(ListNode* head) {
        ListNode *start;
        start = NULL;
        ListNode *newnode;
        newnode = NULL;
        ListNode *temp;
        temp = head;
        int count = 0, cnt = 0;
        while (temp != NULL)
        {
            count ++;
            newnode = new ListNode();
            newnode -> val = temp -> val;
            newnode -> next = NULL;
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
        temp = head;
        ListNode *t;
        t = start;
        while (temp != NULL)
        {
            if (temp -> val == t -> val)
            {
                cnt ++;
            }
            temp = temp -> next;
            t = t -> next;
        }
        bool x;
        if (cnt == count)
            x = true;
        else 
            x = false;
        return x;
    }
};