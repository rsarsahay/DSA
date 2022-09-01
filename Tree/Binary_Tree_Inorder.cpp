class Solution {
public:
    vector<int> inorderTraversal(TreeNode* root) {
        
        //  T.C=O(n)  S.C=O(h)
        
        stack<TreeNode*>st;
        vector<int>ans;
        TreeNode *curr=root;
        
        while(curr!=NULL  ||  st.empty() == false)
        {
            while(curr != NULL)
            {
                st.push(curr);//push all left subnodes in stack
                curr=curr->left;
            }
            
            curr=st.top();
            st.pop();
            ans.push_back(curr->val);//push top values in vector one by one according to inorder traversal
            curr=curr->right;
        }
        return ans;
    }
};