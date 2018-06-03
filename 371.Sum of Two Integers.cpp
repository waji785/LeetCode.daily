class Solution {
public:
    int getSum(int a, int b) {
        int sum = a; 
        while (b != 0)
        {
            sum = a ^ b;//calculate sum of a and b without thinking the carry 
            b = (a & b) << 1;//calculate the carry
            a = sum;//add sum(without carry) and carry
        }       
        return sum;   
    }
};
//这题看看，要写的话，目前数学水平有限
//程序不明白看着走一遍就晓得，但数学的思路即使走过一遍还是很难举一反三
//证明https://leetcode.com/problems/sum-of-two-integers/discuss/84287/My-C++-code-with-proof，难以理解