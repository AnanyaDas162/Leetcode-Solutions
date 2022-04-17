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
    TreeNode *head = new TreeNode (0);
    TreeNode *ptr = head;
    void inorder (TreeNode *root)
    {
        if (root != NULL)
        {
            inorder (root -> left);
            ptr -> right = new TreeNode (root -> val);
            ptr = ptr -> right;
            inorder (root -> right);
        }
    }
    TreeNode* increasingBST(TreeNode* root) {
        inorder (root);
        return head -> right;
    }
};