class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int min=INT_MAX,max=0,n=prices.size();
        
        for(int i=0;i<n;i++)
        {
            if(prices[i]<min)
                min=prices[i];
            else if(prices[i]-min > max)
            {
                max = prices[i]-min;
            }
        }
        return max;
    }
};
