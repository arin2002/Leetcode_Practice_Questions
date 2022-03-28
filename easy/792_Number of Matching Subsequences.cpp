//brute force wont work

class Solution {
public:
      bool check(string s, string a){
        int n=s.length(),m=a.length();
        int i=0,j=0;
        while(i!=n && j!=m)
        {
            if(s[i]==a[j])
                i++;
            j++;
        }
        
        if(i==n)
            return true;
        else
            return false;
    }
    
    int numMatchingSubseq(string s, vector<string>& words) {
        int size= words.size(),m=s.length();
        int i=0,c=0;
        
        for(int i=0;i<size;i++)
        {
            if(check(words[i],s))
                c++;
        }
        return c;
    }
};
