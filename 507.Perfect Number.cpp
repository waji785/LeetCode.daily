/*
description
We define the Perfect Number is a positive integer that is equal to 
the sum of all its positive divisors except itself. 
Now, given an integer n, write a function that returns true when 
it is a perfect number and false when it is not. 
*/
class Solution {
public:
bool checkPerfectNumber(int num) {
        int sum=1;
        for(int i=2;i<=sqrt(num);i++) 
            if(num%i==0) 
                sum += i + (i==num/i ? 0 : num/i);
        return sum==num && num!=1;
    }
};
//自己写的总是超时