class Solution {
public:
    vector<vector<int>> levelOrder(TreeNode* root)
    {
       if(root==NULL)
               return {};
        
           vector<vector<int>> ans; 
            queue<TreeNode*> q;
        
            q.push(root);
            TreeNode *temp;
            int n;
            while(!q.empty())
            {
               n=q.size();
		       vector<int> v;
               for(int i=0;i<n;i++)
               {
                    temp=q.front();
                    q.pop();
                    v.push_back(temp->val);

                   if(temp->left) q.push(temp->left);
                   if(temp->right) q.push(temp->right);
                }
		        ans.push_back(v);
            }
          return ans; 
    }
};