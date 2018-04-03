/*A self-dividing number is a number that is divisible by every digit it contains.
For example, 128 is a self-dividing number because 128 % 1 == 0,
 128 % 2 == 0, and 128 % 8 == 0. 
Also, a self-dividing number is not allowed to contain the digit zero. 
Given a lower and upper number bound, 
output a list of every possible self dividing number, 
including the bounds if possible. */
class Solution {
public:
    vector<int> selfDividingNumbers(int left, int right) {
        vector<int> v;
        for (int i = left; i <= right; ++i) {
            int j= i;//遍历获得每个数
            bool ok = 1;
            while (j) {
                int d= (j%10);//取余数，0/10==0
                if (d == 0 || i % d) ok = 0;//含0以及除某一位数含余的数，返回F
                j/=10;
            }
            if (ok) v.push_back(i);
        }
        
        return v;
    }
};