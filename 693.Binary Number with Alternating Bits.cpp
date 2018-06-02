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