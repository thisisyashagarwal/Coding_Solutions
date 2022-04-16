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
    void assign(TreeNode *root,int& total)
    {
        if( root == NULL)
            return ;
        assign( root->right, total );
        total += root->val;
        root->val = total;
        assign( root->left, total );
    }
    TreeNode* convertBST(TreeNode* root) {
        int total = 0;
        assign( root, total);
        return root;
    }
};