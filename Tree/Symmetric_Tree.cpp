class Solution {
public:
    bool solve(TreeNode * r1, TreeNode * r2)
    {    
        if(r1 == NULL && r2 == NULL)
            return true;
        
		//if both are null and if values of node are not same then it is not symmetry
        else if(r1 == NULL || r2 == NULL || r1->val != r2->val)
            return false; 
        
        //Call solve() 
        return solve(r1->left, r2->right) && solve(r1->right, r2->left);
    }
    
    bool isSymmetric(TreeNode* root) 
    {
        return solve(root->left, root->right);
    }
};