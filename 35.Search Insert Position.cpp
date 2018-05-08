class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int n = nums.size();
        for(int i =0;i<=n;i++){
            if(target==nums[i]||nums[i]>target)
                return i;
        }
        return n;
    }
};
/*class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int low = 0, high = nums.size()-1;
        while (low <= high) {
            int mid = low + (high-low)/2;

            if (nums[mid] < target)
                low = mid+1;
            else
                high = mid-1;
        }
        return low;
    }
};*/
//top 2
/*
TOP 3的二分查找
class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {    
        return lower_bound(nums,target);
    }
    
    int lower_bound(vector<int>& nums,int target){
        int low=0,high=nums.size()-1;
        
        while(low<=high){
            int mid=(low+high)>>1;
            if(nums[mid]<target)
                low=mid+1;
            else 
                high=mid-1;
        }
        return low;
    }
};
*/
/*
static string x =[](){
    std::ios::sync_with_stdio(false);
    cin.tie(NULL);
    return "";
}();

class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        stack<pair<int,int>> st;
        int n = nums.size();
        st.push(pair<int ,int>(0, n-1));
        
        pair<int, int> tmp;
        int mid;
        while(!st.empty())
        {
            tmp = st.top();
            st.pop();
            mid = (tmp.first + tmp.second)/2;
            if(nums[mid] == target)
            {
                return mid;
            }
            else
            {
                if(target < nums[mid])
                {
                    if(tmp.first <= mid-1)
                    {
                        st.push(pair<int, int>(tmp.first, mid - 1));
                    }
                    else
                    {
                        return mid;
                    }
                }
                else
                {
                    if(mid + 1 <= tmp.second)
                        st.push(pair<int, int>(mid + 1, tmp.second));
                    else
                    {
                        return mid + 1;
                    }
                }
            }
        }
    }
};
*/
//top 1 看不懂，那个栈还没学