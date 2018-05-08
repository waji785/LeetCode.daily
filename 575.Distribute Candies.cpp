class Solution {
public:
    int distributeCandies(vector<int>& candies) {
        sort(candies.begin(),candies.end());
            int i=1;
            int cnt=1;
            for(;i<candies.size()&&cnt<candies.size()/2;i++)
                if(candies[i]!=candies[i-1])
                cnt++;
        return cnt;
    }
};
//女孩分一半糖果，最大获得糖果数即是N/2，最小是1