/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    int sum = 0;
    int sumOfLeftLeaves(TreeNode* root,bool flag = false) {
        if(!root)
            return 0;
        sumOfLeftLeaves(root->left,true);
        if(!root->left && !root->right && flag)
            sum += root->val;
        sumOfLeftLeaves(root->right,false);
        return sum;
    }
};