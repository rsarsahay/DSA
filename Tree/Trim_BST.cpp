class Solution {
public:
    TreeNode* trimBST(TreeNode* root, int low, int high) 
    {
        if (!root) 
            return root;
        //check value present in tree is bet.  low and high
        if (root->val >= low && root->val <= high)
        {
            root->left = trimBST(root->left, low, high);
            root->right = trimBST(root->right, low, high);
            return root;
        }
        
        if (root->val < low)
            // return val of right subtree if value is bet. low and high
            return trimBST(root->right, low, high);
        // return val of tree subtree if value is bet. low and high
        return trimBST(root->left, low, high);
    }
};