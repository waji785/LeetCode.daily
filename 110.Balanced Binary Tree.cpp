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
    int check_balance(TreeNode * root){
        if(root==nullptr) return 0;
        else{
            return max(check_balance(root->left)+1,check_balance(root->right)+1);
        }
    }
    bool isBalanced(TreeNode* root) {
        if(root==nullptr) return true;
        else{
            int left=check_balance(root->left);
            int right=check_balance(root->right);
            if(abs(left-right)>1) return false;
        }
        return isBalanced(root->right)&isBalanced(root->left);
        
    }
};
//不求甚解