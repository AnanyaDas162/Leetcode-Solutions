/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    bool equal (TreeNode* p, TreeNode* q){
        bool res;
        if (p == NULL && q == NULL)
        {
            res = true;
        }
        else if (p == NULL || q == NULL)
        {
            res = false;
        }
        else
        {
            res = (p -> val == q -> val) && equal(p -> left, q -> right) && equal(p -> right, q -> left);
        }
        return res;
    }
    bool isSymmetric(TreeNode* root) {
       bool x;
       if (root == NULL)
       {
           x = true;
       }
        else
        {
            x = equal(root -> left, root -> right);
        }
        return x;
    }
};