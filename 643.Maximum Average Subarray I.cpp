class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int sum = 0;
        for(int i = 0;i < k;i++)
            sum+=nums[i];
        int maxvalue = sum;
        for(int j = k;j < nums.size();j++)
        {
            sum = sum + nums[j] - nums[j-k];
            maxvalue =max(maxvalue,sum);
        }
        return maxvalue*1.0/k;
        
    }
};
//标记那个重要程度rank并没什么意义
//写点提示
//本质上有两种解法
//使用不同数据结构实现同一种解法