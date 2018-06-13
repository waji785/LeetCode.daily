class Solution {
public:
    int numberOfArithmeticSlices(vector<int>& A) {
        int dp = 0;
        int sum = 0;
        for (int i = 2; i < A.size(); i++) {
            if (A[i] - A[i - 1] == A[i - 1] - A[i - 2]) {
                dp = 1 + dp;
                sum += dp;
            } else
                dp = 0;
        }
        return sum;
        
    }
};
//对动态规划还没有感觉，那个，动态规划确切来说是什么...
//需要了解一下