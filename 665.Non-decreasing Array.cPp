/*description:
Given an array with n integers, your task is to check if it could become 
non-decreasing by modifying at most 1 element. 
We define an array is non-decreasing 
if array[i] <= array[i + 1] holds for every i (1 <= i < n). */
class Solution {  
public:  
  
    bool checkPossibility(vector<int>& nums) {  
        int cnt = 0;  
        for(int i = 1; i < nums.size() && cnt <=1; i++){  
            if(nums[i-1] > nums[i]){  
                cnt++;  
                if(i-2 < 0 || nums[i-2] <= nums[i])  
                    nums[i-1] = nums[i];//顺序  
                else  
                    nums[i] = nums[i-1];//逆序
            }  
        }  
        return cnt <= 1;  
    }
};
//先判断连续两对逆序数，再判断是否有两对逆序数，即是false，
/*best 13ms 无法理解
static int x = []() { std::ios::sync_with_stdio(false); cin.tie(NULL); return 0; }();
class Solution {
public:
	bool checkPossibility(vector<int>& nums) const {
		int size = (int)nums.size();
		if (size > 2) {
			int prevNum = nums[0], nErrors = 0;
			for (int i = 1; i < size; ++i) {
				int thisNum = nums[i];
				if (thisNum < prevNum) {
					if (++nErrors > 1) { return false; }
					bool mustReplacePrev = (i < size - 1) && (prevNum > nums[i + 1]);
					bool mustReplaceThis = (i > 1) && (thisNum < nums[i - 2]);
					if (mustReplaceThis) { if (mustReplacePrev) { return false; } }
					else { prevNum = thisNum; }
				}
				else { prevNum = thisNum; }
			}
		}
		return true;
	};
};
worest
class Solution {
public:
    bool checkPossibility(vector<int>& nums) {
        if(nums.size() == 1 ) return true;
        for(int i=0;i<nums.size();i++) { 
                vector<int> c = nums;
                c.erase(c.begin()+i);
                if(nondec(c) ) return true;
        }
        return false;
    }
private:
    bool nondec(vector<int> &nums) { 
        for(int i=0;i<nums.size()-1;i++) {
            if(nums[i] > nums[i+1] ) return false;
        }
        return true;
    }
};
*/  