class Solution {
public:
    bool isPowerOfThree(int n) {
        if (n <= 0) return false;
        double mul = log(n) / log(3); // log(3^p) / log3 = p, integer 
        if (abs(mul - round(mul)) <= numeric_limits<double>::epsilon() * 20) return true;
        return false;
    }
};
/*
class Solution {
public:
    bool isPowerOfThree(int n) {
        if (n<=0) return false;
        return 1162261467%n==0;//int范围内最大的三的三次方
        
    }
};
*/