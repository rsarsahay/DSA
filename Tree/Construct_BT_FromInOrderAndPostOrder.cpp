// Using hashmap TC - O(N) SC - O(N)
class Solution {
public:
   unordered_map<int,int>m;
    TreeNode* solve(vector<int>& inorder,vector<int>& postorder,int start,int end,int &postIndex)
    {
        if(start>end) return NULL;
        // find the index of the root node in inorder array 
         int inorderIndex = m[postorder[postIndex]];

        TreeNode* root = new TreeNode(inorder[inorderIndex]);    
        
        (postIndex)--;
        // Now left part of inIndex will be left subtree of root and right part will be 
        // right subtree
        root->right=solve(inorder,postorder,inorderIndex+1,end,postIndex);
        // skip left tree (inIndex - inStart) to calculate the index of the right
        // root node
        root->left=solve(inorder,postorder,start,inorderIndex-1,postIndex);
        
        return root;
    }
    
    
    TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder)
    {

        for(int i=0;i<inorder.size();i++)
           m[inorder[i]] = i;
            
        int postIndex=postorder.size()-1;
        return solve(inorder,postorder,0,postorder.size()-1,postIndex);
    }
};