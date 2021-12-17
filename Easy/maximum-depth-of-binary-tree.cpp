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
    int solve (TreeNode *root, int cnt){
         int l, r;
        if (root == NULL)
        {
            return cnt;
        }
        else
        {
            cnt = cnt + 1;
            l = solve(root -> left, cnt);
            r = solve(root -> right, cnt);
            if (l > r)
            {
                cnt = l;
            }
            else
            {
                cnt = r;
            }
        }
        return cnt;
    }
    int maxDepth(TreeNode* root) {
        int cnt = 0;
        cnt = solve (root, cnt);
        return cnt;
    }
};