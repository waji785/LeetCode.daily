class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        int n = nums.size();
        for(int i = 0; i < n; i++) {
            int idx = abs(nums[i]) - 1;
            if(nums[idx] > 0) nums[idx] = -nums[idx];
        }
        vector<int> ans;
        for(int i = 0; i < n; i++) {
            if(nums[i] > 0)
                ans.push_back(i+1);
        }
        return ans;
    }
};
//取负法，元素出现位置变负，否则为正，之后遍历一次，获得缺少数字