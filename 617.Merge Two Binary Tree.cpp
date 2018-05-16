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
    TreeNode* mergeTrees(TreeNode* t1, TreeNode* t2) {
        if(t1==NULL)
            return t2;
        if(t2==NULL)
            return t1;
        t1->val+=t2->val;
        t1->left=mergeTrees(t1->left,t2->left);
        t1->right=mergeTrees(t1->right,t2->right);
        return t1;
    }
};
//最简单通俗的解法
  /*
        if (t1 == nullptr && t2 == nullptr) {
            return nullptr;
        }
        
        TreeNode* node = new TreeNode(0);
        if (t1 != nullptr && t2 != nullptr) {
            node->val = t1->val + t2->val;
            node->left = mergeTrees(t1->left, t2->left);   
            node->right = mergeTrees(t1->right, t2->right);
        } else if (t1 == nullptr) {
            node->val = t2->val;
            node->left = mergeTrees(nullptr, t2->left);   
            node->right = mergeTrees(nullptr, t2->right);
        } else if (t2 == nullptr) {
            node->val = t1->val;
            node->left = mergeTrees(t1->left, nullptr);   
            node->right = mergeTrees(t1->right, nullptr);
        }
        
        return node;
        */
//用了额外空间，一棵树空，不直接返回另一个树，是为了不修改数据？