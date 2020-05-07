class Solution {
    
    
    
    
public:
    
    bool canJump(vector<int>& nums) {
        
        const int n=nums.size();
        
        if(n==0)
            return false;
        
        vector<int>poss(n,-1);
        poss[0]=nums[0];
        for(int i=1;i<n;i++)
        {
            
            bool cani=false;
            for(int j=i-1;j>=0;j--)
            {
                
                if( poss[j]!=-1  and poss[j]>=i-j)
                {
                    cani=true;
                    break;
                }
                
            }
            
            if(cani)
                poss[i]=nums[i];
            
        }
        
        return poss[n-1]==nums[n-1] ? true : false;
        
        
    }
};