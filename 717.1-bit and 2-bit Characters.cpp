/*descrption:
We have two special characters. 
The first character can be represented by one bit 0. 
The second character can be represented by two bits (10 or 11). 
Now given a string represented by several bits.
 Return whether the last character must be a one-bit character or not. 
 The given string will always end with a zero.*/
class Solution {
public:
    bool isOneBitCharacter(vector<int>& b) {
        bool c;
        for (int i = 0; i < b.size();) {
            if (b[i]) c = 0, i+=2;
            else c = 1, ++i;
        }
        return c;
    }
};
//遍历数组，碰到1跳过下一个相邻的数字遍历，设置FALSE，为0反之
/*using namespace std;
int x=[](){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    return 0;
}();
*/
/*ios::sync_with_stdio(false);
 std::cin.tie(0);
 https://stackoverflow.com/questions/44154218/c-syncing-of-cin-and-cout-with-iostream/44154609#44154609
 https://stackoverflow.com/questions/27253519/alternating-cin-cout-is-slow/27257893#27257893
*/