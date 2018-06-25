class Solution {
public:
    int minMoves(vector<int>& nums) {
        int sum, min;
        sum = nums[0];
        min = nums[0];
        for(int i = 1; i < nums.size(); i++){
            sum += nums[i];
            if(min > nums[i])   min = nums[i];
        }
        return sum - nums.size() * min;
    }
};