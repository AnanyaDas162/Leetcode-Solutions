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
        ListNode *temp = head, *start = NULL, *newnode = NULL, *last = NULL;
        vector <int> v;
        while (temp != NULL)
        {
            v.push_back(temp -> val);
            temp = temp -> next;
        }
        map <int, int> m;
        for (int i = 0; i < v.size(); i ++)
        {
            m[v[i]] ++;
        }
        v.clear();
        for (auto i = m.begin(); i != m.end(); i ++)
        {
            if ((*i).second == 1)
            {
               newnode = new ListNode();
                newnode -> next = NULL;
                newnode -> val = (*i).first;
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
            }
        }
        return start;
    }
};