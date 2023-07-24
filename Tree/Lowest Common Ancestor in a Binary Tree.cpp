class Solution
{
    public:
    //Function to return the lowest common ancestor in a Binary Tree.
    // T.C = O(n)
    // S.C = O(n)
    Node* lca(Node* root ,int n1 ,int n2 )
    {
       //Your code here
        //Base cases
       if(root == NULL)
       return root;
       if(root->data == n1 || root->data == n2)
       return root;
       
       Node *left = lca(root->left , n1 , n2) ; 
       Node *right = lca(root->right , n1 , n2) ; 
       
       if(left && right)// if both right and left are not NULL we found result
           return root ; 
           
       if(left)
           return left ; 
           
       return right; 
    }
};
