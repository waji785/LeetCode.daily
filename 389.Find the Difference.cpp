class Solution {
public:
    char findTheDifference(string s, string t) {
        unordered_map<char,int> res;
        for(char c:s)
            ++res[c];
        for(char c:t)
            if(--res[c]<0)
                return c;
        return 0;
    }
};
//用map储存遍历，我觉得这才是正常解法嘛。。。
//另一种是异或，抵消相同的字符
//但这两种做法，都只适用于只有一种字符