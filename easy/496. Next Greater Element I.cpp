class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        vector<int> v;
        map<int,int> p;
        stack<int> s;
        
        for(int i= nums2.size()-1;i>=0;i--)
        {
            while(!s.empty() && nums2[i]>s.top())
            {
                s.pop();
            }
            
            if(!s.empty())
            {
                p.insert({nums2[i],s.top()});
            }
            else if (s.empty())
                p.insert({nums2[i],-1});
            
            s.push(nums2[i]);
        }
        
        for(int i=0;i<nums1.size();i++)
        {
            auto it= p.find(nums1[i]);
            v.push_back(it->second);
        }
        return v;
        
    }
};
