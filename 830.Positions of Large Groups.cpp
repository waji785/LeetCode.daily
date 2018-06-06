class Solution {
public:
    vector<vector<int>> largeGroupPositions(string S) {
        vector<vector<int>> res;
        S=S+"$";//这句话的作用是用于终止循环，形如[a,a,a]这种，换成其它字符也是NP
        int start=0;
        int end=1;
        for (; end < S.size(); end++) {
            if (S[end] != S[end-1]) {
                if(end-start >= 3) 
                res.push_back(vector<int>{start, end-1});
                start = end;
            }
        }
        return res;
    }
};
//连续，判定不相等