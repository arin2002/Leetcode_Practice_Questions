class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        vector<int> v;
        int n =nums.size();
        for(int i=0;i<n*2;i++)
            v.push_back(nums[i%n]);
        return v;
    }
};
