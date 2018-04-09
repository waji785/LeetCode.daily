static const auto _____ = []()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    return nullptr;
}();

class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        auto cur = 0;

		for(auto i=0; i < nums.size(); i++) {
			if (nums[i] != val) {
				nums[cur] = nums[i];
				cur++;
			}
		}

		return cur;
    }
};
//判断不等，从0开始填充