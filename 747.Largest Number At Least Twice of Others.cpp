class Solution {
public:
    int dominantIndex(vector<int>& nums) {
        if(!nums.size()) return -1;
        int n = nums.size();
        if(n==1) return 0;
        int max1 = nums[0],max2 = -1,index1 = 0;
        for(int i=1;i<n;++i) {
        	if(nums[i]>=max1) {
        		index1 = i;
                max2 = max1;
        		max1 = nums[i];
        	}
            else if(nums[i]>max2)
                max2 = nums[i];
        }
        if(max1>= (max2<<1))
        	return index1;
        else return -1;
    }
};