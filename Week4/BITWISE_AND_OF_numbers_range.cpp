class Solution {
public:
    int rangeBitwiseAnd(int m, int n) {
        
        
        if(m==0)
            return 0;
        else if(m==n)
            return m;
        
        
        int ans=0;
        while(m<n)
        {
            m>>=1;
            n>>=1;
            ans++;
        }
        return m << ans;
        
        
    }
};