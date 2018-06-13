class Solution {
public:
    int rob(vector<int>& nums) {
        vector<int> dp;
        if(nums.size()==0)return 0;
        if(nums.size()==1)return nums[0];
        if(nums.size()==2)return max(nums[0],nums[1]);
        dp.push_back(nums[0]);
        dp.push_back(max(nums[0],nums[1]));
        for(int i=2;i<nums.size();i++){
            int dpi=max(dp[i-2]+nums[i],dp[i-1]);
            dp.push_back(dpi);
        }
        return  dp[nums.size()-1];
    }
};
/*
#include<vector>

using namespace std;

class Solution {
public:
    int rob(vector<int>& nums) {
        int lastRob = 0, lastNotRob = 0;
        int tmpRob  = 0, tmpNotRob  = 0;
        for (size_t i = 0; i < nums.size(); ++i)
        {
            tmpRob    = lastNotRob + nums[i];
            tmpNotRob = lastRob > lastNotRob ? lastRob : lastNotRob;
            lastRob    = tmpRob;
            lastNotRob = tmpNotRob;
        }
        return lastRob > lastNotRob ? lastRob : lastNotRob;
    }
};
*/