class Solution {
public:
    vector<int> countBits(int num) {
        vector <int> dp(num+1);
        dp[0] = 0;
        if(num >= 1) dp[1] = 1;
        int cur = 2; int close = 2;
        while(cur<=num) {
            close = (!(cur & cur-1)) ? cur : close;
            dp[cur] = 1 + dp[cur-close];
            cur++;
        }
        return dp;
    }
};
//新姿势bitset<32>().count()
//普通人想到的应该是调用方法与找规律
//他们是怎么找到x&(x-1)+1的？