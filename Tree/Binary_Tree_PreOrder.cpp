/*
   T.C :  O(n)
   S.C :  O(H)  H=Height of tree
*/

class Solution {
public:
    
    void preorderTraversalHelper(TreeNode* root, vector<int> &res)
    {
	if(root)
	{
	    res.push_back(root -> val);           
        // left-right-parent(postorder)
		if(root -> left)
			preorderTraversalHelper(root -> left, res);

		if(root -> right)
			preorderTraversalHelper(root -> right, res);
	}

	return;
    }
    //calling of function tree
   vector<int> preorderTraversal(TreeNode* root) 
   {   
	vector<int> res;
	preorderTraversalHelper(root, res) ;
	return res;
        
    }
};