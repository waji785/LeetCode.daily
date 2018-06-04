class Solution {
public:
    int countBinarySubstrings(string s) {
        int first=0,second=0,res=0,i=0;
        char cur=s[0];
        int length = s.length();
        for(i=0;i<length;i++){
            if(s[i] == cur){
                second++;
            }else{
                res += min(first,second);//两个组之间，我们只取前面的那个，诸如0011，不取011，避免重复
                first=second;
                second=1;
                cur=s[i];
            }
        }
        return res+min(first,second);//加上最后一组
    }
};
//样本