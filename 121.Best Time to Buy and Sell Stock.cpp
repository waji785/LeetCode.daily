class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int buy = INT_MAX;//为了少些几行代码
        int sell = 0;
        for(int i=0; i<prices.size(); i++)
        {
            buy = min(buy, prices[i]);
            sell = max(sell, prices[i] - buy);
        }
        return sell;
        }
};
//永远只买后一天更低的价格，售出价格永远要比先前的高才会被替换
//虽然没做过多少贪心算法，但记得贪心算法需要数学证明才能使用，这个证明目前不会
//似乎用局部最优解的推广来证明，数学真是难懂啊，实际中会用多少呢