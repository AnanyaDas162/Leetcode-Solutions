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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        int count = 0;
        ListNode *temp = head;
        while (temp != NULL)
        {
            count ++;
            temp = temp -> next;
        }
        int pos = (count - n) + 1;
        temp = head;
        ListNode *p = NULL;
        if (pos == 1)
        {
            head = head -> next;
            delete (temp);
        }
        else if (pos ==count)
        {
            while (temp -> next != NULL)
            {
                p = temp;
                temp =temp -> next;
            }
            p -> next = NULL;
            delete (temp);
        }
        else
        {
            for (int i = 0; i < pos-2; i ++)
            {
                temp = temp -> next;
            }
             //ListNode *p;
             p = temp -> next;
             temp -> next = p -> next;
             delete(p);
        }
        return head;
    }
};