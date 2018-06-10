class Solution {
public:
    int islandPerimeter(vector<vector<int>>& grid) {
      int ret = 0;
      for(int i = 0 ; i < grid.size(); ++i){//行
        for(int j = 0; j < grid[0].size(); ++j)//列
        {
          if(grid[i][j] == 1)
          {
            ret +=4;
            if( i > 0 && grid[i-1][j]==1) ret--; //下方有,i>0,i < grid.size()-1去除边界情况,下面j同理
            if( i < grid.size()-1 && grid[i+1][j]==1) ret--; //上方有
            if( j > 0 && grid[i][j-1]==1) ret--; //左边有
            if( j < grid[0].size()-1 && grid[i][j+1]==1) ret--; //右边有

          }
        }
      }
      return ret;
    }
};
//考察基本思路，实现能力，是否出BUG