class Solution {
public:
    int diameterOfBinaryTree(TreeNode* root)
    {
        int d = 0;
        dia(root, d);
        return d;
    }
    
    int dia(TreeNode* root ,int &d)
    {
        if(!root) 
            return 0;
        
        // Find depths of left and right subtrees
        int ld = dia(root->left , d);
        int rd = dia(root->right, d);
        
        d = max(d, ld+rd);// Diameter is the number of edges between the farthest nodes
        return max(ld,rd)+1;// Return largest diameter (maybe not through root)
    }
};