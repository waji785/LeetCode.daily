class Solution {
  public:
      bool isHappy(int n) {
          unordered_map<int, int> m;
          while (true) {
             int sum = 0;
              while (n) {
                  sum += (n % 10) * (n % 10);
                  n /= 10;
             }
             
             n = sum;
             if (m[sum]++ > 0) {
    
                 break;//发生循环退出
             }
         }
         
         return n == 1;
     }
 };
 /*
 有个神奇的限制循环次数，但不是下面这个
 int digitSquareSum(int n) {
    int sum = 0, tmp;
    while (n) {
        tmp = n % 10;
        sum += tmp * tmp;
        n /= 10;
    }
    return sum;
}

bool isHappy(int n) {
    int slow, fast;
    slow = fast = n;
    do {
        slow = digitSquareSum(slow);
        fast = digitSquareSum(fast);
        fast = digitSquareSum(fast);
    } while(slow != fast);
    if (slow == 1) return 1;
    else return 0;
}
*/