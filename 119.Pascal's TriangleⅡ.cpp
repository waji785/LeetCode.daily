class Solution {
public:
    vector<int> getRow(int rowIndex) {
        vector<int> res(rowIndex + 1, 1);
        for(int i = 1; i <= rowIndex; i++)
        {
            for(int j = i - 1; j > 0; j--)
            {
                res[j] = res[j] + res[j - 1];
            }
        }
        return res;
    }
};
//不断覆盖res，直到目标行
/*
class Solution {
public:
    vector<int> getRow(int k) {
        vector<int> ans(k+1,1);
        for(int i=1;i<=k/2;++i){          
           ans[k-i]= ans[i]=long(ans[i-1])*(k-i+1)/i;           
        }        
        return ans;
    }
};
这个有数学解法
*/