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
    bool isSymmetric(TreeNode* root) {
        return isMirror(root, root);
}

    bool isMirror(TreeNode* t1, TreeNode* t2) {
    if (t1 == NULL && t2 == NULL) return true;
    if (t1 == NULL || t2 == NULL) return false;
    if (t1->val!=t2->val) return false;
    return isMirror(t1->right, t2->left)&&isMirror(t1->left, t2->right);
    }
};
//一个方法同时遍历一个树两次，比较，比把树镜像复制再比较快许多，实现也更好