class Solution {
public:
    int hammingWeight(uint32_t n) {
        int count = 0;
        while (n) {
            n &= (n - 1);
            count++;
        }  
        return count;
    }
};
/*
int hammingWeight(uint32_t n) {
    int count;
    
    asm volatile ("popcnt %1, %0\n"
                  : "=r" (count)
                  : "r" (n));

    return count;
}
学过点汇编，可我怎么就看不懂
*/