class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        
        
        const int n=nums.size();
        
        if(n==0)
            return;
        
        int i=0,j=1;
        
        
        
        while(j<n)
        {
            
            if(nums[j]!=0)
            {
                if(i<n && nums[i]!=0)
                    i++;
                swap(nums[i],nums[j]);
                j++;
            }
            else 
                j++;
            
            
        }
        
       
        
        
    }
};