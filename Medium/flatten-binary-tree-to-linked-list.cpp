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
    vector <int> v;
    void preorder(TreeNode *root){
        if (root){
            v.push_back(root -> val);
            preorder(root -> left);
            preorder (root -> right);
        }
    }
    void flatten(TreeNode* root) {
        preorder (root);
        TreeNode *tail = root, *t = NULL;
        if (root){
             root -> left = NULL;
        }
        int i = 0;
        while (tail != NULL){
            tail -> val = v[i];
            tail -> left = NULL;
            i ++;
            t = tail;
            tail = tail -> right;
        }
        for (int j = i; j < v.size(); j ++){
            TreeNode *newnode = new TreeNode (v[j]);
            t -> right = newnode;
            t -> left = NULL;
            t = newnode;
        }
    }
};