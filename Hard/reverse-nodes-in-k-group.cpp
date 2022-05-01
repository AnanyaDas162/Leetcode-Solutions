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
    vector <int> v1, v2, v;
    ListNode* reverseKGroup(ListNode* head, int k) {
        ListNode *temp=head;
        while (temp != NULL){
            v1.push_back(temp -> val);
            temp = temp -> next;
        }
        for (int i = 0; i < v1.size(); i ++){
            if ((i+1) % k != 0){
                v.push_back(v1[i]);
            }
            else{
                 v.push_back(v1[i]);
                for (int j = v.size()-1; j >= 0; j --){
                    v2.push_back(v[j]);
                }
                v.clear();
            }
        }
        if (v.size() > 0){
            for (int i = 0; i < v.size(); i ++){
                v2.push_back(v[i]);
            }
        }
        head = NULL;
        ListNode *tail = NULL;
        for (int i = 0; i < v2.size(); i ++){
            ListNode *newnode = new ListNode(v2[i]);
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