class Solution {
public:
bool hasPathSum(TreeNode* root, int targetSum)
{
if(root==NULL) return false;

    //we reached here,i.e the root is not NULL, so we took the root value in our sum,and remaining
	//targetSum is targetSum-root value.       
    targetSum=targetSum-root->val;
    
    //if the current node is a leaf and its value is equal to the sum, we've found a path
    if(targetSum==0 && root->left==NULL && root->right==NULL) 
        return true;
    
    // recursively call to traverse the left and right sub-tree
    // return true if any of the two recursive call return true
    return hasPathSum(root->left,targetSum) || hasPathSum(root->right,targetSum);
}
};