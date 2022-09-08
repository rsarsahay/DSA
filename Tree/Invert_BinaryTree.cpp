class Solution {
public:
    TreeNode* invertTree(TreeNode* root) 
    {
        if (!root) 
            return root;
        
        swap(root->left, root->right);//swap left and right subtrees
        // till it not reach its end
        invertTree(root->left);
        invertTree(root->right);
        
        return root;
    }
};