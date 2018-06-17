//rank:h
class Solution {
public:
    bool rotateString(string A, string B) {
        if (A.size()==B.size()&&(A+A).find(B) != string::npos)//string::npos表示不存在的位置
            return 1;
        return 0;
    }
};
//常规为三次翻转比较和直接截取比较以及如上
//Rolling Hash
//KMP