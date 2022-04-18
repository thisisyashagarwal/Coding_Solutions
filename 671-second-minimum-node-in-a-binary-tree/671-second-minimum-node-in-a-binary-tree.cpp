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
    
    map<int,int>m;
    
    void inorder( TreeNode* root)
    {
        if( root ==NULL)
            return;
        int v = root->val;
        m[v]++;
        inorder( root->left);
        inorder(root->right);
    }

    int findSecondMinimumValue(TreeNode* root) {
        if( root == NULL)
            return 0;
        int v,i = 0,k=2;
        inorder( root );
        map<int,int>:: iterator itr;
        for( itr = m.begin(); itr!= m.end(); itr++)
        {
            i++;
            if( i == k)
                return itr->first;
        }
        return  -1;

    }
};