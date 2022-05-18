class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        int n = nums.size();
        // in one value and other index not count 
        map<int,int> m;
     // just traverse the whole array and find if duplicate is there or not if found check the base conditions
	 // if true return true else update the key value to new index
        for(int i = 0;i<n;i++)
        {
            auto ip = m.find(nums[i]);
            
            if(ip!=m.end())
            {
                int j = ip->second;
                if(abs(i-j)<=k)
                    return true;
                else
                    m[nums[i]] = i;
            }
            else
                m[nums[i]] = i;
        }
        return false;
    }
};
