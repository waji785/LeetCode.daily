class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
            vector<int> res;
            int begin=0;
            int end=numbers.size()-1;
        while(begin<end)
        {
            if(numbers[begin]+numbers[end]==target){
                res.push_back(begin+1);
                res.push_back(end+1);
                return res;
            }
            if(numbers[begin]+numbers[end]>target)
               end--;
             else
               begin++;
        }
    }
};
//一开始到的是二分法，双指针，但思路有些复杂，大约是低效的，看了下讨论区，惊为天人
//思路就是用最大最小相加与目标比较，小于往右逼近，大于往左逼近，这题必定有解，循环那里写1都没关系
//不过这是怎么想到的呢