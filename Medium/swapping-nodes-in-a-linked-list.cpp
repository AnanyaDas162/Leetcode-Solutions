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
    ListNode* swapNodes(ListNode* head, int k) {
        ListNode *temp = head;
        int count = 0, x, l_index, y;
        while (temp != NULL)
        {
            if (count == k-1)
            {
                x = temp -> val;
            }
             count ++;
            temp = temp -> next;
        }
        if(head != NULL)
        {
            l_index = count - k;
        }
        int cnt = 0;
        temp = head;
        while (temp != NULL)
        {
            if (cnt == l_index)
            {
                y = temp -> val;
            }
            cnt ++;
            temp = temp -> next;
        }
        temp = head;
        cnt = 0;
        while (temp != NULL)
        {
            if (cnt == k-1)
            {
                temp -> val = y;
            }
            else if (cnt == l_index)
            {
                temp -> val = x;
            }
            cnt ++;
            temp = temp -> next;
        }
        return head;
    }
};