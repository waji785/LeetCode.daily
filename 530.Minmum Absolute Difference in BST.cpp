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
    int getMinimumDifference(TreeNode* root) {
        if (root->left != NULL) getMinimumDifference(root->left);
		if (val >= 0) min_dif = min(min_dif, root->val - val);
		val = root->val;
		if (root->right != NULL) getMinimumDifference(root->right);
		return min_dif;
	}
private:
	int min_dif = INT_MAX, val = -1;

};