class Solution {
public:
    bool isPowerOfTwo(int n) {
        return n > 0 && !(n&(n-1));
    }
};
//几题Power of x十分相似,但二与二进制有关,比较重要,真的是如此吗?其实两者毫无关联...