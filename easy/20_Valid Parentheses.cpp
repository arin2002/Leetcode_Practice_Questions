class Solution {
public:
char close(char x)
{
    if(x==')') return '(' ;
    if(x=='}') return '{' ;
    if(x==']') return '[' ;
    return 'e' ;
    
}
bool isValid(string s) 
{
    stack<char> stack ;
    
    for(char x:s)
    {
        if(stack.size()==0) stack.push(x) ;
        else if( x=='(' or x=='{' or x=='[' ) stack.push(x) ;
        else
        {
            if( stack.top() == close(x) ) stack.pop() ;
            else return false;
        }
    }
    
    return stack.size()==0 ; 
}

};
