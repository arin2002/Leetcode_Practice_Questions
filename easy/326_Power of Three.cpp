class Solution {
public:
    bool isPowerOfThree(int n) {
        //return (n==1 && n>0)? true: false;
        
        if(n==1)
            return true;
        else if(n<=0)
            return false;
        long long int n1=n;
        
        while(n1>1){
            if(n1%3!=0)
                return false;
            n1/=3;
        }
        return true;
    }
};
