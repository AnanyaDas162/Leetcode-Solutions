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
    ListNode* rotateRight(ListNode* head, int k) {
        ListNode *start = NULL, *newnode = NULL, *temp = NULL, *last = NULL, *ptr = NULL;
        temp = head;
       // vector <int> v;
        int count = 0;
        while (temp != NULL)
        {
            //v.push_back(temp -> val);
            count ++;
            temp = temp -> next;
        }
        int l = count;
        int index;
        if (head != NULL)
        {
            index = (l - (k % l)) % l;
        }
        int cnt = 0;
        temp = head;
        while (temp != NULL)
        {
            if (index == 0)
            {
                start = head;
            }
            else if (index == cnt+1)
            {
                last = temp;
                start = temp -> next;
            }
            cnt ++;
            ptr = temp;
            temp = temp -> next;
        }
        if (index != 0 && head != NULL)
        {
            ptr -> next = head;
            last -> next = NULL;
            head = start;
        }
        return head;
    }
};