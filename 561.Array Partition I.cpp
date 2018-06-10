class Solution {
public:
    int arrayPairSum(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        
        int res=0;
        for(int i=0;i<nums.size();i=i+2)
        {
            res +=nums[i]; 
        }
        
        return res;
    }
};
//直觉往往比表达容易得多
//要让两两最小值之和最大，应先从大数取起，能取到最大数为第二大的数，如此类推