int mySqrt(int x) {
    if(x == 0) return 0; 
    float result = x; 
    float xhalf = 0.5f*result; 
    int i = *(int*)&result; 
    i = 0x5f375a86- (i>>1); // what the fuck? 
    result = *(float*)&i; 
    result = result*(1.5f-xhalf*result*result); // Newton step, repeating increases accuracy 
    result = result*(1.5f-xhalf*result*result); 
    float a=1.0f/result;
    int b=1/result;
    if(b*b>x)
        return a-1;
    else
        return a;

}
//非典型牛顿迭代法，说实话我看不懂，出自雷神之锤3