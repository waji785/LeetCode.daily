class Solution {
public:
    bool isPalindrome(int x) {
        if (x < 0 ||x%10==0 && x!=0){
            return false;
        }
        int rev = 0;
        while(x > rev){
            rev = rev*10 + x%10;
            x = x/10;
        }
        
        return x == rev || x == rev/10;
    }
};
//翻转一半的数字比较，x==rev/10考虑了奇数的情况