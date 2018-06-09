class Solution {
public:
    int countPrimeSetBits(int L, int R) {
        unordered_set<int>  s = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31};
        int cnt = 0;
        for(int i = L; i <= R; ++i) {
            cnt += s.count(bitset<32>(i).count());//bitset<32>(i)推测意思为转化为二进制，但与查询结果不符？
        }
        return cnt;
    
    }

};
//我觉得我需要把家里那本砖头搬来了