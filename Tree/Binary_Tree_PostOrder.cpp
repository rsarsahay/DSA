/*
   T.C :  O(n)
   S.C :  O(H)  H=Height of tree
*/

class Solution {
public:
    void tree(TreeNode *node, vector<int>& arr)
    {
        if(node)
        {
            // left-right-parent(postorder)
            tree(node->left, arr);
            tree(node->right, arr);
            arr.push_back(node->val);
        }
    }
   //calling of function tree
    vector<int> postorderTraversal(TreeNode* root)
    {
        vector<int> ans;
        tree(root, ans);
        return ans;
    }
};