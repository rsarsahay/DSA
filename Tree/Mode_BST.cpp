class Solution {
public:
    unordered_map<int, int>mp;
    
    void dfs(TreeNode* root) 
    {
        if (!root) 
            return;
        
        else 
            mp[root->val]++;//compute frequency of each element present in tree
        dfs(root->left);
        dfs(root->right);
    }
    
    vector<int> findMode(TreeNode* root) 
    {
        vector<int> ans;
        int tMax = -1;
        dfs(root);
        for (auto e: mp) 
        {
            if (e.second == tMax) 
                ans.push_back(e.first);
            
            else if (e.second > tMax)
            {
                tMax = e.second;//max frequency
                ans={e.first};//push max frequency element in vector
            }
        }
        return ans;
    }
};
