//rank:h
class Solution {
public:
    int findTargetSumWays(const vector<int> &nums, int s) {
        int sum = accumulate(nums.begin(), nums.end(), 0);
        return sum < s || (sum + s) & 1 ? 0 : subsetSum(nums, (sum + s) >> 1);
    }

private:
    int subsetSum(const vector<int> &nums, int s) {
        int dp[s + 1] = {1};
        for (auto n : nums)
            for (int i = s; i >= n; --i)
                dp[i] += dp[i - n];
        return dp[s];
    }
};
//dp[n]=dp[n]+dp[n-1]