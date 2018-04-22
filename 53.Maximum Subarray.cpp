class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int ans=nums[0],i,j,sum=0;
        int n=nums.size();
        for(i=0;i<n;i++){
            sum+=nums[i];
            ans=max(sum,ans);
            sum=max(sum,0);
        }
        return ans;


    }
};
//最大子列和问题，尝试用分而治之失败了，还不如暴力算法
//sum标记开始加的地方，ans标记最大数字
//一般来说，当所有数为负数时，返回0，但这题并不是...