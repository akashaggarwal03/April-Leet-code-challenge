class Solution {
public:
    bool checkValidString(string s) {
        
        
        const int n=s.length();
        stack<int>open;
        stack<int>star;
        
        
        for(int i=0;i<n;i++)
        {
            if(s[i]=='(')
                open.push(i);
            else if(s[i]=='*')
                star.push(i);
            else
            {
                if(!open.empty())
                    open.pop();
                else
                {
                    if(!star.empty())
                        star.pop();
                    else
                        return false;
                }
                
            }
        }
        
        
        if(open.empty())
            return true;
        else if(open.size()>star.size())
            return false;
        else
        {
            while(!open.empty())
            {
                int index_open= open.top();
                int index_star=star.top();
                if(index_open>index_star)
                    return false;
                
                open.pop();
                star.pop();
                
                
            }
            return true;
            
        }
        
        
        
    }
};