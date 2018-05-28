class Solution {
public:
    int addDigits(int num) {
        return (num-1)%9+1;
    }
};
//无法理解的数学方法，可读性很差，但是很好看
/*
class Solution {
public:
    int digSum(int n){
        int total = 0;
        while(n > 0){
            total += n % 10;
            n /= 10;
        }
        return total;
    }
    
    int addDigits(int num) {
        while(num >= 10){
            num = digSum(num);
        }
        return num;
    }
};
*/
//常规解法