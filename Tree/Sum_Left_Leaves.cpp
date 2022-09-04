 */
class Solution {
public:
    int sumOfLeftLeaves(TreeNode* root) 
    {
        
        if(root == NULL)
            return 0;
        
         // if root is not NULL, check if it has a left child which is a leaf node
        if(root->left!=NULL && root->left->left==NULL && root->left->right==NULL)
            return root->left->val + sumOfLeftLeaves(root->right);
        

        // call recursion on left and right subtrees
        return sumOfLeftLeaves(root->left) + sumOfLeftLeaves(root->right);
    }
};