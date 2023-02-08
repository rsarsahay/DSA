class Solution{
  public:
    /*You are required to complete this method*/
    int maxDepth(Node *root) {
        // Your code here
        if(root==NULL)
            return 0;

        int x=1+maxDepth(root->left);
        int y=1+maxDepth(root->right);

        return max(x,y);
    }
};
