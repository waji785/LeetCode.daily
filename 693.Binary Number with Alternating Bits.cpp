class Solution {
public:
    bool hasAlternatingBits(int n) {
        int cur = n % 2;
        n /= 2;
        while (n > 0) {
            if (cur == n % 2) return false;
            cur = n % 2;
            n /= 2;
        }
        return true;
    }
};
//用了二进制数学上的转换方法，用循环不断比较最后一位与前一位是否相等
//另一种是常规转换为2进制，再逐一比较，两种没有本质不同
/*
class Solution {
public:
    bool hasAlternatingBits(int n) {
        
         while(n!=0){
            int result = (n&1)^((n>>1)&1);
            
            if(result == 0) { return false; }
            n=n>>1; 
        }
        return true;
    }
};
其中n&1等价于n%2==1
我居然做过这题
*/