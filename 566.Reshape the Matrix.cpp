class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& nums, int r, int c) {
        vector<vector<int>> res(r, vector<int>(c));
		if (nums.size() == 0 || r * c != nums.size() * nums[0].size())
			return nums;
		int count = 0;
		queue<int> queue;
		for (int i = 0; i < nums.size(); i++) {
			for (int j = 0; j < nums[0].size(); j++) {
				queue.push(nums[i][j]);
			}
		}
		for (int i = 0; i < r; i++) {
			for (int j = 0; j < c; j++) {
				res[i][j] = queue.front();
				queue.pop();
			}
		}
		return res;
    }
};
//两个循环，一个装入一个拿出，队列实在太精彩了，代码就要写的这样通俗易懂又简洁啊
//有时最求性能，但绝大多数人一辈子也碰不到那样的东西，更多是作为黑箱调用
//减少BUG的最好方式也许就是在写的时候减少出错，比如像这样