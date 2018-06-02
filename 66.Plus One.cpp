class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int length=digits.size();
        vector<int> returnValue(length+1,0);
        returnValue[length]=1;
        for( int i=length-1;i>=0;i--)
        {
            returnValue[i+1-1]+=(returnValue[i+1]+digits[i])/10; 
            returnValue[i+1]=(returnValue[i+1]+digits[i])%10;
             
        }
        if (returnValue[0]==0)
            returnValue.erase(returnValue.begin());
          
        return returnValue;
    }
}
//看不懂数学题
        

