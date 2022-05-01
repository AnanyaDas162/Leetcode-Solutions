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
    vector <int> v1, v2;
    ListNode* partition(ListNode* head, int x) {
        ListNode *temp = head;
        while (temp){
            if (temp -> val < x){
                v1.push_back(temp -> val);
            }
            else{
                v2.push_back(temp -> val);
            }
            temp = temp -> next;
        }
        head = NULL;
        ListNode *tail = NULL;
        for (int i = 0; i < v1.size(); i ++){
            ListNode *newnode = new ListNode (v1[i]);
            if (head == NULL){
               head = newnode;
                tail = newnode;
            }
            else{
                tail -> next = newnode;
                tail = newnode;
            }
        }
         for (int i = 0; i < v2.size(); i ++){
            ListNode *newnode = new ListNode (v2[i]);
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