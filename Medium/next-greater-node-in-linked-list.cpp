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
    vector<int> nextLargerNodes(ListNode* head) {
        ListNode *t = NULL, *temp = head;
        vector <int> v;
        while (temp != NULL)
        {
            t = temp;
            while (t != NULL)
            {
                if (t -> val > temp -> val)
                {
                    v.push_back(t -> val);
                    break;
                }
                t = t -> next;
                if (t == NULL)
                {
                    v.push_back(0);
                }
            }
            temp = temp -> next;
        }
        return v;
    }
};