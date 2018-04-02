/*
Description:
Write a program that outputs the string representation of numbers from 1 to n.
But for multiples of three it should output “Fizz” instead of the number 
and for the multiples of five output “Buzz”.
 For numbers which are multiples of both three and five output “FizzBuzz”.
 */
 class Solution {
public:
    vector<string> fizzBuzz(int n) {
        vector<string> ret_vec(n);
        for(int i=1; i<=n; ++i)
        {
            if(0 == i%3)
            {
                ret_vec[i-1] += "Fizz";
            }
            if(0 == i%5)
            {
                ret_vec[i-1] += "Buzz";
            }
            if(ret_vec[i-1].empty())
            {
                ret_vec[i-1] += to_string(i);
            }
        }
        return ret_vec;
    }
};
/*
我现在无法写出这题
判断能否被整除，这是第一种思路，遍历
另外还有一种
建立1~N数组
获得要改的数字
然后往里填充字符串
先填充15
再判断是否被填充
否，填充3,5，是跳过
但这是建立在打印1~N的T(n)<O(n)的情况下
我不知道除此之外还有没有其他算法比这个快
*/