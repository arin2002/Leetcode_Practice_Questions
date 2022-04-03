class Solution {
public:
    int mySqrt(int x) {
        long int ans=1,y=0;
        
        while(ans){
            if((ans*ans)<x){
                y=ans;
                ans++;
            }
            else
                break;
        }
        if(ans*ans<=x)
            return ans;
        else return y;
    }
};
