class Solution {
public:
    bool isPowerOfTwo(int n) {
        long long int n1=n;
        if(n1==1)
            return true;
        else if(n1<=0)
            return false;
        
        while(n1>1){
            
            if(n1%2!=0)
                return false;
            n1/=2;
        }
        return true;
    }
};
