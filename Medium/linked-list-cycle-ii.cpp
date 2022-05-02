/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    vector <ListNode*> v;
    ListNode *detectCycle(ListNode *head) {
           ListNode *temp = head, *res = NULL;
           int check = 0;
           while (temp != NULL){
               for (int j = 0; j < v.size(); j ++){
                   if (v[j] == temp){
                       res = temp;
                       check = 1;
                       break;
                   }
               }
               if (check == 1){
                   break;
               }
               v.push_back(temp);
               temp = temp -> next;
           }
        return res;
    }
};