/*description:
Given two binary strings, return their sum (also a binary string). 
For example,
a = "11"
b = "1"
Return "100". */
using namespace std;
int x=[](){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    return 0;
}();
class Solution {
public:
    string addBinary(string a, string b) {
        string s ="";
        int i=a.size()-1;
        int j=b.size()-1;//获得数字个数
        int c=0;
        while(i>=0||j>=0||c==1){
            c+=i>=0?a[i--]-'0':0;
            c+=j>=0?b[j--]-'0':0;//转化为数字，位相加
            s=char(c%2+'0')+s;//获得当前位的数字
            c/=2;}//进位保留在C，最后一次循环写入最高位
            return s; 
    }
};