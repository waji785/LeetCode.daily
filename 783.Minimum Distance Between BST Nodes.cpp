//rank:h
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
    int minDiffInBST(TreeNode* root) {
        int val = -1;
        int diff = INT_MAX;
        traverse(root, val, diff);
        return diff;
    }
    
    void traverse(TreeNode* root, int& val, int& diff) {
        if(root -> left) {
            traverse(root -> left, val, diff);
        }
        if(val >= 0) {
            diff = min(diff, root -> val - val);
        }
        val = root -> val;
        if(root -> right) {
            traverse(root -> right, val, diff);
        }
    }
};