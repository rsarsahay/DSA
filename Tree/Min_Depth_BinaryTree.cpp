//  T.C=O(n)
class Solution {
public:
    int minDepth(TreeNode* root) {
        
        if (root == NULL) 
            return 0;
        // compute the depth of each subtree
        if (root->left == NULL) 
            return 1 + minDepth(root->right);
        
        if (root->right == NULL) 
            return 1 + minDepth(root->left);
        
        return 1 + min(minDepth(root->left), minDepth(root->right));
        
    }
};