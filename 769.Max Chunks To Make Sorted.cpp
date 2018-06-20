//rank:l
class Solution {
public:
    int maxChunksToSorted(vector<int>& arr) {
        int ans = 0, _max = 0;
        for (int i = 0; i < arr.size(); ++i) {
            _max = max(_max, arr[i]);
            if (_max == i) ans++;
        }
        return ans;
        
    }
};