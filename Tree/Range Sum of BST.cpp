class Solution {
public:
    int rangeSumBST(TreeNode* root, int low, int high) 
    {
        if(!root) 
            return 0;
        
        int s = 0;
        
        if(root->val >= low && root->val <= high) //Check nodes value smaller than inclusive rangevalues
            s += root->val;
        return s + rangeSumBST(root->left, low, high) + rangeSumBST(root->right, low, high);
     }
};