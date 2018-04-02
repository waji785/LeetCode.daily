/*
Description:
Given an array of integers, 
every element appears twice except for one. Find that single one.
Note:
Your algorithm should have a linear runtime complexity. 
Could you implement it without using extra memory? 
*/
class Solution {
public:
    int singleNumber(vector<int>& nums) {
        if(nums.empty()) return 0;
        int first = nums[0];
        for(int i = 1; i<nums.size();i++) {
            first = first ^ nums[i];
        }
        return first;
    }
};
/*
XOR性质，  a^b=b^a;
             0^a=0;
             a^a=0;
            因此，遍历一次，相同成对元素结果会相互抵消变0，
            余下即是Single Number
*/