class Solution {
public:
    bool backspaceCompare(string S, string T) {
        
        stack<char>st1;
        stack<char>st2;
        
        for(char ch:S)
        {
            if(ch=='#' && !st1.empty())
            {
                st1.pop();
            }
            else if(ch!='#')
            {
                st1.push(ch);
            }
            
            
        }
        
        for(char ch:T)
        {
            if(ch=='#' && !st2.empty())
            {
                st2.pop();
            }
            else if(ch!='#')
            {
                st2.push(ch);
            }
            
        }
        
        if(st1.size()==st2.size())
        {
            while(!st2.empty())
            {
                if(st1.top()!=st2.top())
                    return false;
                else
                {
                    st1.pop();
                    st2.pop();
                }
            }
            return true;
        
        }
        else
            return false;
       
    }
};