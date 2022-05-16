class Solution {
public:
    int fib(int n) {
        if(n==0)
            return 0;
        if(n==1)
            return 1;
        return fib(n-1)+fib(n-2);
    }
};

using loop
class Solution {
public:
    int fib(int n) {
        if(n==0 || n==1)
            return n;
        
        int a=0,b=1,c=0;
        
        for(int i=0;i<n-1;i++)
        {
            c = a+b;
            a = b;
            b = c;
        }
        return c;
    }
};
