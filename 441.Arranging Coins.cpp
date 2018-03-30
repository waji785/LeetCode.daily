using namespace std;
int x=[](){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    return 0;
}();
class Solution {
public:
    int arrangeCoins(int n) {
        int cnt=0;
        int a=1;
        while(n-a>=0){
            n=n-a;
            a++;
            cnt++;}
        return cnt;
        
    }
};
//最优解是算法问题，没啥好说的