class Solution {
public:
    bool judgeSquareSum(int c)
	{
		int up = sqrt(c);
		for (int i = up; i >= 0; --i)
        {
            int r = sqrt(c - i * i);
            if (r * r == c - i * i)
                return true;
        }
		return false;
	}
};
//二分查找
//费马定理