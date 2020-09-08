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
    int recur(TreeNode* root,int num=0){
        if (root == nullptr) return 0;
  num = ((num << 1) + root->val);
  return ((root->left==NULL && root->right==NULL) ? num : recur(root->left, num) + recur(root->right, num));
    }
    int sumRootToLeaf(TreeNode* root) {
        return recur(root);
    }
};
