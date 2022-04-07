class Solution {
public:
    bool isPowerOfFour(int n) { 
        if(n==1)
            return true;
        else if(n<=0)
            return false;
        long long int n1=n;
        
        while(n1>1){
            if(n1%4!=0)
                return false;
            n1/=4;
        }
        return true;
    }
};
