class Solution {
public:
    vector<vector<int>> levelOrderBottom(TreeNode* root) 
    {
    vector<vector<int>> ans; 
       if(root==NULL)
               return ans;
        
            queue<TreeNode*> q;
        
            q.push(root);
            int n;
            while(!q.empty())
            {
               n=q.size();
		       vector<int> v;
               for(int i=0;i<n;i++)
               {
                    TreeNode *temp=q.front();
                    q.pop();
                    v.push_back(temp->val);//stores values of each level traversal

                   if(temp->left) 
                   q.push(temp->left);
                   
                   if(temp->right) 
                   q.push(temp->right);
                }
		        ans.push_back(v);
            }
          reverse(ans.begin(),ans.end());//reverse the value of vector
           return ans;
    }  
};