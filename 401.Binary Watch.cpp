class Solution {
public:
    vector<string> result; //定义最终返回结果列表的全局变量
    vector<int> hour = {8,4,2,1}; 
    vector<int> minute = {32,16,8,4,2,1};
    vector<string> readBinaryWatch(int num) {
        //这道题还是回溯算法，重在熟练掌握回溯套路模板，多看https://blog.csdn.net/versencoder/article/details/52071930
        //本题另外的trick在于将时间xx:xx的表示用pair<int, int> time
        backtracking(num, 0, make_pair(0,0));
        return result;
    }
    
    void backtracking(int num, int start, pair<int, int> time)
    {
        if(num == 0) //出口
        {
            if(time.second<10)
                result.push_back(to_string(time.first) + ":0" + to_string(time.second));
            else
                result.push_back(to_string(time.first) + ":" + to_string(time.second));
            return;
        }
        else
        {
            for(int i=start; i<hour.size()+minute.size(); i++) //有start的for循环
            {
                if(i<hour.size())
                {
                    time.first += hour[i];
                    if(time.first<12)
                        backtracking(num-1, i+1, time);
                    time.first -= hour[i]; //回溯点
                }
                else
                {
                    time.second += minute[i-hour.size()];
                    if(time.second<60)
                        backtracking(num-1, i+1, time);
                    time.second -= minute[i-hour.size()]; //回溯点
                    
                }
            }
        }
    }
};
//贴样例，了解下回溯法
//考察点在实现能力和是否考虑周全，第一次见到有彩色图片的题，写起来不简单