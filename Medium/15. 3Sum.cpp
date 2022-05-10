class Solution {
public:
    
    vector<vector<int>> threeSum(vector<int>& nums) {
        // map for keeping count
        set<vector<int>>x;
        vector<vector<int>> v;
        int n = nums.size();
        sort(nums.begin(),nums.end());

        for(int i=0;i<n-2;i++)
        {
            int low = i+1;
            int high = n-1;
            int target = -nums[i];
            while(low<high)
            {
                if(nums[low] + nums[high] == target)
                {
                    x.insert({nums[i], nums[low] , nums[high]});
                    low++;high--;
                }
                else if(nums[low] + nums[high] < target)
                    low++;
                else
                    high--;
            }
        }
        
        for(auto itr = x.begin(); itr!=x.end();itr++)
        {
            v.push_back(*itr);
        }
        return v;
    }
};
