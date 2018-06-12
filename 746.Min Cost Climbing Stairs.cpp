class Solution {
public:
    int minCostClimbingStairs(vector<int>& cost) {
        cost.push_back(0);//防止溢出？
        int prev2 = cost[0], prev1 = cost[1], cur = 0;
        for (int i = 2; i <= cost.size(); i++) {
            cur = cost[i] + min(prev2, prev1);
            prev2 = prev1;
            prev1 = cur;
        }
        return cur;
    }
};
//dynamic programming