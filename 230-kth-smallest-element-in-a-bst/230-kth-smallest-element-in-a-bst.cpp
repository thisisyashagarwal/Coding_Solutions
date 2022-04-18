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
    
        TreeNode* inorder( TreeNode* root, TreeNode* temp)
    {
        if( root ==NULL)
            return temp;
        temp = inorder( root->left, temp);
        temp->right = root;
        root->left = NULL;
        temp = root;
        return inorder( root->right, temp );
    }
    
    TreeNode* increasingBST(TreeNode* root) {
        if( root == NULL)
            return NULL;
        TreeNode* temp = new TreeNode(0);
        inorder( root, temp);
        return temp->right;
            
    }
    
    int kthSmallest(TreeNode* root, int k) {
        if( root == NULL)
            return 0;
        TreeNode* temp = new TreeNode(0);
        inorder( root, temp);
        int v;
//        TreeNode* temp1 = temp;
       /* for( int i=0; i<5;i++)
        {
            if( temp1 == NULL)
                cout<<0<<" ";
            else
                cout<<temp1->val<<" ";
            temp1 = temp1->right;
        }*/
        for( int i=0; i<=k; i++)
        {
            v = temp->val;
            temp = temp->right;
            cout<<v<<" ";
        }
        return v;
    }
};