class Solution {
public:
    void moveZeroes(vector<int>& nums) 
    {
        int zeroCount = 0;
        auto len = nums.size();
        for(auto i = 0; i <len; ++i)
            if(nums[i] == 0)
                ++zeroCount;//记录累计0的个数
            else if(zeroCount>0)
                nums[i - zeroCount] = nums[i];//把数字移动到所有0前面
        
        for(auto i = len - zeroCount; i < len; ++i)
           nums[i] = 0;//填充0               
    }
};
//官方解法看不懂..22:00
/*class Solution {
public:
    void moveZeroes(vector<int>& nums) {
    int lastNonZeroFoundAt = 0;
    for (int i = 0; i < nums.size(); i++) {
        if (nums[i] != 0) {
            nums[lastNonZeroFoundAt++] = nums[i];
        }
        这玩意是啥比如1234050
        1，


    }
    for (int i = lastNonZeroFoundAt; i < nums.size(); i++) {
        nums[i] = 0;
    }
}
};*/