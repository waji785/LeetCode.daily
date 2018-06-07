class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> res(numRows);
        for(int i = 0; i< numRows; i++)
        {
            res[i].resize(i+1);//设置长度
            res[i][0] = res[i][i]=1;//初始化第一个数
            for(int j = 1; j < i; j++)
            {
                res[i][j] = res[i-1][j-1]+ res[i-1][j];//规律
            }
        }
        return res;
    }
};