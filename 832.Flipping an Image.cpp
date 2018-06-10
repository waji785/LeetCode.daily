class Solution {
public:
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& A) {
        for(auto& x: A){
            reverse(x.begin(), x.end());
            for(auto& y: x) y ^= 1;
        }
        return A;
    }
};
//简单粗暴的方法
/*
class Solution {
    public int[][] flipAndInvertImage(int[][] A) {
        int C = A[0].length;
        for (int[] row: A)
            for (int i = 0; i < (C + 1) / 2; ++i) {
                int tmp = row[i] ^ 1;
                row[i] = row[C - 1 - i] ^ 1;
                row[C - 1 - i] = tmp;
            }

        return A;
    }
}
左边的第i个值等于右边第i个值的倒数,我觉得工程上不应该出现这种解法
*/