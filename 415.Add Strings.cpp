/*description:
Given two non-negative integers num1 and num2 represented as string, return the sum of num1 and num2.
Note: 
The length of both num1 and num2 is < 5100.
Both num1 and num2 contains only digits 0-9.
Both num1 and num2 does not contain any leading zero.
You must not use any built-in BigInteger library or convert the inputs to integer directly.
using namespace std;*/
//暴力玩法，同67题，我是不会满足的，对我来说有一点点难，过几天上传
int x=[](){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    return 0;
}();
class Solution {
public:
    string addStrings(string num1, string num2) {
    string s ="";
        int i=num1.size()-1;
        int j=num2.size()-1;//获得数字个数
        int c=0;
        while(i>=0||j>=0||c==1){
            c+=i>=0?num1[i--]-'0':0;
            c+=j>=0?num2[j--]-'0':0;//转化为数字，位相加
            s=char(c%10+'0')+s;//获得当前位的数字
            c/=10;}//进位保留在C，最后一次循环写入最高位
            return s; 
    }
};