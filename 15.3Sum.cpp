//rank:h
class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        std::sort(nums.begin(), nums.end());
        vector<vector<int>> r;
        
        for(int i = 0; i+2 < nums.size(); ++i){
            
            if(i == 0 || nums[i] != nums[i-1]){
                int low = i+1;
                int high = nums.size()-1;
                int target = -nums[i];
                while(low < high){
                    int sum = nums[low] + nums[high];
                    if(sum == target){
                        r.push_back(vector<int>({nums[i], nums[low], nums[high]}));
                        while(low < high && nums[low] == nums[low+1]) ++low;
                        while(low < high && nums[high] == nums[high-1]) --high;
                        ++low;
                        --high;
                    }
                    else if(sum < target){
                        ++ low;
                    }
                    else{
                        -- high;
                    }
                }
            }
        }
        return r;
    }
};
//转化为2Sum解法