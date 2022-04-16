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
    TreeNode* searchBST(TreeNode* root, int val) {
        TreeNode* r;
        /*if (root -> val == val)
        {
            //return root;
            r = root;
        }
        else if (root == NULL)
        {
            r = NULL;
            //return r;
        }
        else if (val > root -> val)
        {
            searchBST(root -> right, val);
        }
        else if (val < root -> val)
        {
            searchBST(root -> left, val);
        }
        return r;*/
        while ( root != NULL)
        {
            if (root -> val == val)
            {
                r = root;
                break;
            }
            else if (val > root -> val)
            {
                root = root -> right;
            }
            else
            {
                root = root -> left;
            }
        }
        if (!r)
        {
            r = NULL;
        }
        return r;
    }
};