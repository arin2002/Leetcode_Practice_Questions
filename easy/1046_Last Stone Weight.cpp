class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        
        while(stones.size()>1){
            sort(stones.begin(),stones.end());
                 int a= stones[stones.size()-1];
                 int b= stones[stones.size()-2];
                 stones.pop_back();
                 stones.pop_back();
                 if(a!=b)
                 stones.push_back(abs(b-a));

        }
                 return stones.size() ? stones[0] : 0;
    }
};
