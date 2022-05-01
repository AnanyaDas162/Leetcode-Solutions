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
    ListNode* mergeKLists(vector<ListNode*>& lists) {
      for (int i = 0; i < lists.size(); i ++){
          ListNode *temp = lists[i];
          while (temp != NULL){
              v.push_back(temp -> val);
              temp = temp -> next;
          }
      }
        sort (v.begin(), v.end());
        ListNode *head = NULL;
        ListNode *tail = NULL;
        for (auto it = v.begin(); it != v.end(); it ++){
            ListNode *newnode = new ListNode ();
            newnode -> val = *(it);
            newnode -> next = NULL;
            if (head == NULL){
                head = newnode;
                tail = newnode;
            }
            else{
                tail -> next = newnode;
                tail = newnode;
            }
        }
        return head;
    }
};