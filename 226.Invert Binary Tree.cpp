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
    TreeNode* invertTree(TreeNode* root) {
        if(!root)
            return nullptr;
        auto tmp=root->right;
        root->right=invertTree(root->left);
        root->left=invertTree(tmp);
        return root;
        
        
    }
};
//条件是作为退出递归用的
//SHIFT+ALL+A以及ctrl+k,ctrl+c
/* class Solution {
public:
    TreeNode* invertTree(TreeNode* root) {
        if(root==NULL)
            return NULL;
        queue<TreeNode*> que;
        que.push(root);
        while(!que.empty())
        {
            TreeNode* p=que.front();
            que.pop();
            TreeNode* temp=p->left;
            p->left=p->right;
            p->right=temp;
            if(p->left!=NULL)
                que.push(p->left);
            if(p->right!=NULL)
                que.push(p->right);
        }
        return root;
    }
}; */
//用了队列？看不太懂？