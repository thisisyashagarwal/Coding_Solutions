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
        
        // temp = inorder( root->left, temp);
        // temp->right = root;
        // root->left = NULL;
        // temp = root;
        // return inorder( root->right, temp );
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
//         TreeNode* temp = new TreeNode(0);
//         inorder( root, temp);
//         int v;
//         map<int,int>m;
//         for( int i=0; i<3; i++)
//         {
//             if( temp == NULL)
//                 return -1;
//             v = temp->val;
//             if( m.find(v) == m.end())
//                 m[v]++;
//             else
//                 i--;
//             temp = temp->right;
//              cout<<v<<" ";
//         }
        return v;
    }
};