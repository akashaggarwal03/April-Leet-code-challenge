class Solution {
public:
    
    long long int number(long long int n)
    {
        long long int res=0;
        while(n)
        {
            long long int temp= n%10;
            n/=10;
            res+=(temp*temp);
        }
        return res;
    }
    
    
    
    
    
    bool isHappy(int n) {
        
        
        set<int>se;
        se.insert(4);
        se.insert(16);
        se.insert(37);
        se.insert(58);
        se.insert(89);
        se.insert(145);
        se.insert(42);
        se.insert(20);
        
        while(se.find(n)==se.end())
        {
            n= number(n);
            if(n==1)
                return true;
        }
        
        return false;
        
        
    }
};