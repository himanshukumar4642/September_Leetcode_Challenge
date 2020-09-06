/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    vector<int> ans;
    void util(TreeNode* root){
        if(!root) return;
        util(root->left);
        ans.push_back(root->val);
        util(root->right);
        
    }
    vector<int> getAllElements(TreeNode* root1, TreeNode* root2) {
        util(root1);
        util(root2);
        sort(ans.begin(),ans.end());
        return ans;
    }
};
