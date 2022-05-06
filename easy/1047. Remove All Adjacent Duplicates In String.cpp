class Solution {
public:
    string removeDuplicates(string s) {
        int n= s.size();
        if(n<2)
            return s;
        
        stack<pair<char,int>> st;
        
        for(int i=0;i<n;i++)
        {
            if(st.empty() || st.top().first!=s[i])
                st.push({s[i],1});
            else
            {
                auto p = st.top();
                st.pop();
                st.push({s[i],2});
            }
            
            if(st.top().second==2)
                st.pop();
        }
        string ans="";
        
        while(!st.empty())
        {
            auto it= st.top();
            ans.push_back(it.first);
            st.pop();
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};
