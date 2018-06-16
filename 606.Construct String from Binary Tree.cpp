//rank:n
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
    
    void preorder(TreeNode *t, string &str) {
        str.append(to_string(t->val));
        if(t->left) {
            str.append("(");
            preorder(t->left,str);
            str.append(")");
        }
        if(!t->left && t->right) str.append("()");
        if(t->right) {
            str.append("(");
            preorder(t->right,str);
            str.append(")");
        }
        
    }
    
    string tree2str(TreeNode* t) {
        string str = "";
        if(!t) return str;
        preorder(t,str);
        return str;
    }
};
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
/*
class Solution {
public:
    string tree2str(TreeNode* t) {
     if(!t)
         return "";
        string s=to_string(t->val);
        if(t->left)
            s=s+'('+tree2str(t->left)+')';
        else if(t->right)
            s=s+"()";
        if(t->right)
            s=s+'('+tree2str(t->right)+')';
        return s;  
    }
    };
*/