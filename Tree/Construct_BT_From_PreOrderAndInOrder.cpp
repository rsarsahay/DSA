// Using hashmap TC - O(N) SC - O(N)
class Solution {
public:
TreeNode* solve(unordered_map<int, int>& mp, vector& preorder, vector& inorder, int preStart, int inStart, int inEnd)
{
if(preStart >= preorder.size() || inStart > inEnd) 
return NULL;

TreeNode* root = new TreeNode(preorder[preStart]);

// find the index of the root node in inorder array (we can use linear search as well)
int inIndex = mp[root->val];

// Now left part of inIndex will be left subtree of root and right part will be right subtree
root->left = solve(mp, preorder, inorder, preStart + 1, inStart, inIndex - 1);
// skip left tree (inIndex - inStart) to calculate the index of the right root node
root->right = solve(mp, preorder, inorder, preStart + inIndex - inStart + 1, inIndex + 1, inEnd);
return root;
}

TreeNode* buildTree(vector& preorder, vector& inorder) {
unordered_map<int, int> mp;
for(int i = 0; i < inorder.size(); i++)
{
mp[inorder[i]] = i;
}
return solve(mp, preorder, inorder, 0, 0, inorder.size() - 1);
}
};