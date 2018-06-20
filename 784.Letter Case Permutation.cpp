//rank:m
class Solution {
public:
    vector<string> letterCasePermutation(string S) {
        vector<string> res;
        int idx = 0;
        letterCasePermutation(S, res, idx);
        return res;
    }
private:
    void letterCasePermutation(string S, vector<string> &res, int idx) {
        res.push_back(S);
        for(int i = idx; i < S.size(); ++i) {
            char tmp = S[i];
            if( S[i] <= 'z' && S[i] >= 'a' ) {
                S[i] = S[i] - 'a' + 'A';
                letterCasePermutation(S, res, i+1);
            } else if( S[i] <= 'Z' && S[i] >= 'A' ) {
                S[i] = S[i] -'A' + 'a';
                letterCasePermutation(S, res, i+1);
            }
            S[i] = tmp;
        }
    }
};
//虽然是一眼就能看出的解法,但是要写出这样也并不容易