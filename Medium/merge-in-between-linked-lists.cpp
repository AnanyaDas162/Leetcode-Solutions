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
    ListNode* mergeInBetween(ListNode* list1, int a, int b, ListNode* list2) {
        ListNode *temp = list1, *start = NULL;
        int cnt = 0;
        while (temp != NULL)
        {
            if (cnt == b)
            {
                start = temp -> next;
                break;
            }
            cnt ++;
            temp = temp -> next;
        }
        temp = list1;
        cnt = 0;
        while (temp != NULL)
        {
            if (cnt == a - 1)
            {
                temp -> next = list2;
                break;
            }
            cnt ++;
            temp = temp -> next;
        }
        temp = list2;
        while (temp->next != NULL)
        {
            temp = temp -> next;
        }
        temp -> next = start;
        return list1;
    }
};