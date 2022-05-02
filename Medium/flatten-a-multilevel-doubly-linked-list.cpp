/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* prev;
    Node* next;
    Node* child;
};
*/

class Solution {
public:
     Node *start = NULL;
    void findChild (Node *temp){
        Node *s = NULL, *t = NULL;
         s = temp -> child;
         temp -> child = NULL;
         t = temp -> next;
         if (t){
              t -> prev = NULL;
         }
         temp -> next = s;
         s -> prev = temp;
         while (temp -> next != NULL){
             if (temp -> child){
                 findChild (temp);
             }
            temp = temp -> next;
         }
         temp -> next = t;
         if (t){
             t -> prev = temp;
         }
    }
    Node* flatten(Node* head) {
       start = head;
        Node *temp = head;
        while (temp != NULL){
            if (temp -> child != NULL){
               findChild (temp);
            }
            temp = temp -> next;
        }
        return head;
    }
};