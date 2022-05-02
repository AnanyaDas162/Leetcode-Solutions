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
    vector <int> v;
    ListNode* sortList(ListNode* head) {
        ListNode *temp = head;
        while (temp != NULL){
            v.push_back(temp -> val);
            temp = temp-> next;
        }
        sort (v.begin(), v.end());
        ListNode *start = NULL;
        temp = NULL;
        for (int i = 0; i < v.size(); i ++){
            ListNode *newnode = new ListNode (v[i]);
            if (start == NULL){
                start = newnode;
                temp = newnode;
            }
            else{
                temp -> next = newnode;
                temp = newnode;
            }
        }
        return start;
    }
};