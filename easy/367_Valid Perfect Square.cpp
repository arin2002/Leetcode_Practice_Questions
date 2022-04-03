class Solution {
public:
    bool isPerfectSquare(int num) {
        long int y=1;
        while(num){
            if((y*y)<num){
                y++;
            }
            else{
                break;
            }
        }
        if((y*y)==num)
            return true;
        else
            return false;
    }
};
