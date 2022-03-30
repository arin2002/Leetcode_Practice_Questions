class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int n=digits.size(),carry=0,sum=0,add;
        vector<int>v;
        stack<int>s;
        for(int i=n-1;i>=0;i--)
        {
            if(i==n-1)
            sum=digits[i]+1;
            else
                sum=digits[i]+carry;
            carry=sum/10;
            add=sum%10;
            s.push(add);
        }
        if(carry==1)
            s.push(carry);
        
        while(!s.empty())
        {
            v.push_back(s.top());
            s.pop();
        }
        return v;
    }
};
