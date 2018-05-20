class Solution
{
  public:
    int findMaxConsecutiveOnes(vector<int> &nums)
    {
        int cnt = 0;
        int res = 0;
        for (int i = 0; i <= nums.size(); i++)
        {
            if (nums[i] == 1)
            {
                cnt++;
            }
            else
            {
                if (res < cnt)
                {
                    res = cnt;
                }
                cnt = 0;
            }
        }
        return res;
    }
};
//<=判断条件很奇怪
/*
class Solution
{
  public:
    int findMaxConsecutiveOnes(vector<int> &nums)
    {
        int count = 0;
        int ret = 0;
        for (auto i : nums)
        {
            if (i == 1)
                ret = max(++count, ret);
            else
                count = 0;
        }
        return ret;
    }
};
*/
//通俗解法