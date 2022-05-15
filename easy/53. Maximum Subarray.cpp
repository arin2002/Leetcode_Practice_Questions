1) O(n) kadens algo

class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int n = nums.size(),sum=0;
        int maxi = nums[0];
        for(auto i: nums){
            sum +=i;
            maxi = max(sum,maxi);
            if(sum<0) sum=0;
        }
        return maxi;
    }
};

2) 0(n3)
class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int n = nums.size();
        int maxi = nums[0];
        
        for(int i=0;i<n;i++)
        {
            for(int j=i;j<n;j++)
            {
                int sum=0;
                for(int k = i ; k<=j; k++)
                {
                    sum +=nums[k];
                }
                maxi = max(sum,maxi);
            }
            //sum = 0;
        }
        return maxi;
    }
};

3) O(n2)

class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int n = nums.size();
        int maxi = nums[0];
        
        for(int i=0;i<n;i++)
        {
            int sum =0;
            for(int j=i;j<n;j++)
            {
                sum +=nums[j];
                maxi = max(sum,maxi);
            }
            //sum = 0;
        }
        return maxi;
    }
};
