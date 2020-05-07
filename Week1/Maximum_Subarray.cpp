class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        
        
        long long sum=nums[0];
        long long temp=0;
        const int n=nums.size();
        
        for(int i=0;i<n;i++)
        {
            temp+=nums[i];
            if(temp>sum)
                sum=temp;
            if(temp<0)
                temp=0;
            
        }
        return sum;
    }
};