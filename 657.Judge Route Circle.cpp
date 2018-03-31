class Solution {
public:
    bool judgeCircle(string moves) {
        int a =0;
        int b=0;
        for(int i=0;i<moves.size();i++){
            if(moves[i]=='D')
                a++;
            if(moves[i]=='U')
                a--;
            if(moves[i]=='L')
                b++;
            if(moves[i]=='R')
                b--;
        }
        return a==0&&b==0;
        
    }
};
//两个变量记录位置，最初与最后变量相等，数据结构贼烂