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
    TreeNode* aux(const vector<int>& nums, int start, int end) {
        if(start >= end) return nullptr;
        
        TreeNode* result = nullptr;
        
        // Now find the max.
        int max = nums[start];
        int pos = start;
        for(int i = start; i < end; i++) {
            if(nums[i] > max){
                max = nums[i];
                pos = i;
            }
        }
        result = new TreeNode(max);
        result->left = aux(nums, start, pos);
        result->right = aux(nums, pos + 1, end);
        
        return result;
    }
    TreeNode* constructMaximumBinaryTree(vector<int>& nums) {
        if (nums.size() == 0) return nullptr;
        
        return aux(nums, 0, nums.size());//始终感觉哪里不对，到底是解法和预期不一致，还是题目给的东西本身有问题
    }
};
//写不出来，不过能看懂，这个通俗易懂简单明了的解法太棒了